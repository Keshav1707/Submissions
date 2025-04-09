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
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
void dfs(int i, int j, int h, int w, vector<vector<int>> &vis, vector<vector<char>> &v, int &c)
{
    int direc[5] = {-1, 0, 1, 0, -1};
    vector<pair<int, int>> p;
    for (ll k = 0; k < 4; k++)
    {
        int nrow = i + direc[k];
        int ncol = j + direc[k + 1];

        if (nrow >= 0 && ncol >= 0 && nrow < h && ncol < w && !vis[nrow][ncol])
        {

            if (v[nrow][ncol] == '#')
            {
                cout << "b" << endl;
                p = vector<pair<int, int>>();
                break;
            }
            p.pb({nrow, ncol});
        }
    }
    for (auto n : p)
    {
        cout << n.first << " " << n.second << endl;
        vis[n.first][n.second] = 1;
        dfs(n.first, n.second, h, w, vis, v, c);
    }
    c++;
}
void solve()
{
    di(h);
    di(w);
    vector<vector<char>> v(h);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            char c;
            cin >> c;
            v[i].pb(c);
        }
    }
    vector<vector<int>> vis(h, vector<int>(w, 0));
    int maxi = 0;
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            // cout << i << endl;
            if (!vis[i][j] && v[i][j] == '.')
            {
                int c = 0;
                // vis = vector<vector<int>>(h, vector<int>(w, 0));
                cout << i << " " << j << " " << endl;
                vis[i][j] = 1;
                dfs(i, j, h, w, vis, v, c);
                cout << c << "j" << endl;
                maxi = max(c, maxi);
            }
        }
    }
    cout << maxi << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}