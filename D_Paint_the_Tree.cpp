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
void solve()
{
    di(n);
    di(a);
    di(b);
    vector<vector<int>> adj(n + 1);
    for (ll i = 0; i < n - 1; i++)
    {
        di(u);
        di(v);
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int> dis(n + 1, 0);
    vector<int> vis(n + 1, 0);
    queue<int> q;
    vis[a] = 1;
    q.push(a);
    bool f = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (auto &&i : adj[p])
        {
            if (!vis[i])
            {
                dis[i] = dis[p] + 1;
                q.push(i);
            }
            if (i == b)
            {
                f = 1;
                break;
            }
        }
        if (f)
            break;
    }
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