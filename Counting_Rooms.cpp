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
// vector<ll> adj[4004];
void dfs(int i, int j, vector<string> &v, vector<vecll> &vis)
{
    vis[i][j] = 1;
    int direc[5] = {-1, 0, 1, 0, -1};
    for (ll x = 0; x < 4; x++)
    {
        int ni = i + direc[x];
        int nj = j + direc[x + 1];
        if (ni >= 0 && nj >= 0 && ni < v.size() && nj < v[0].size() && vis[ni][nj] == 0 && v[ni][nj] == '.')
        {
            dfs(ni, nj, v, vis);
        }
    }
}
void solve()
{
    di(x);
    di(y);
    vector<string> v;
    for (ll i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int a = 0;
    vector<vector<int>> vis(x, vecll(y, 0));
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < y; j++)
        {

            if (v[i][j] == '.' && vis[i][j] == 0)
            {

                a++;
                dfs(i, j, v, vis);
            }
        }
    }
    cout << a << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}