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
const int M = 1e9 + 7;
int dfs(int node, vector<vector<int>> &adj, vector<int> &vis, int &s)
{
    vis[node] = 1;
    s++;
    for (auto i : adj[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, adj, vis, s);
        }
    }

    return s;
}
void solve()
{
    di(n);
    di(m);
    vector<vector<int>> adj(n + 1);
    for (ll i = 0; i < m; i++)
    {
        di(a);
        di(b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<int> vis(n + 1, 0);
    int size = 1;
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            ct++;
            int x = 0;
            // cout << dfs(i, adj, vis, x) << endl;
            size = size % M * (dfs(i, adj, vis, x)) % M;
            size %= M;
        }
    }
    cout << ct << " " << size << endl;
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