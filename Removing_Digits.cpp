#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
int orangesRotting(vector<vector<int>> &grid)
{
    int r = grid.size();
    int c = grid[0].size();
    int fresh = 0;
    
    queue<pair<int, int>> q;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (grid[i][j] == 2)
            {
                q.push({i, j});
            }
            if (grid[i][j] == 1)
                fresh++;
        }
    }
    int ans = -1;
    int drow[4] = {-1, 0, 1, 0};
    int dcol[4] = {0, 1, 0, -1};
    while (!q.empty())
    {

        int s = q.size();
        while (s--)
        {

            pair<int, int> p = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int nrow = p.first + drow[i], ncol = p.second + dcol[i];
                if (nrow >= 0 && ncol >= 0 && nrow < r && ncol < c && grid[nrow][ncol] == 1)
                {
                    q.push({nrow, ncol});
                    grid[ncol][nrow] = 2;

                    fresh--;
                }
            }
        }
        ans++;
    }
    return ans;
}
void solve()
{
    vector<vector<int>> v = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    cout << orangesRotting(v);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}