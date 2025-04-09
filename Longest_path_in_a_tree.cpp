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
void dfs(int node, vector<vecll> &adj, vecll &vis, int &maxi, int &maxele, int curd)
{
    vis[node] = 1;
    // cout<<curd<<endl;
    if (curd > maxi)
    {

        maxi = curd;
        maxele = node;
    }
    for (auto i : adj[node])
    {
        if (vis[i] == 0)
        {
            // cout << i << endl;
            dfs(i, adj, vis, maxi, maxele, curd + 1);
        }
    }
}
void solve()
{
    di(x);
    vector<vecll> adj(x + 1);
    for (ll i = 0; i < x - 1; i++)
    {
        di(v);
        di(u);
        adj[v].pb(u);
        adj[u].pb(v);
    }
    vector<int> vis(x + 1, 0);
    int n = -1;
    int maxi = INT_MIN;
    int maxele = -1;
    int curd = 0;
    dfs(1, adj, vis, maxi, maxele, curd);
    maxi = INT_MIN;
    fill(all(vis), 0);
    dfs(maxele, adj, vis, maxi, n, 0);
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