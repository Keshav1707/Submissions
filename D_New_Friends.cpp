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
const int M = 1e9 + 7;
int dfs(int node, vector<vector<int>> &adj, vector<int> &vis, int &s, vector<int> &cvis)
{
    // cout << node << endl;
    vis[node] = 1;
    cvis.pb(node);
    s++;
    for (auto i : adj[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, adj, vis, s, cvis);
        }
    }
    // cout << s << endl;
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
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        int size = 0;
        vector<int> cvis;
        if (vis[i] == 0)
        {
            int x = 0;
            size += (dfs(i, adj, vis, x, cvis));
        }
        for (auto i : cvis)
        {
            s += size - adj[i].size() - 1;
        }
    }
    cout << s / 2 << endl;
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