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
int rec(int i, int n, int x, int m, vector<pair<int, char>> &v, set<int> &res)
{
    if (x == m)
    {
        res.insert(i);
        return 0;
    }
    if (v[x].second == '?')
    {
        int cw = (i + v[x].first);
        if (cw > n)
            cw = cw - n;

        rec(cw, n, x + 1, m, v, res);
        int acw = (i - v[x].first);
        if (acw <= 0)
            acw = n + acw;

        rec(acw, n, x + 1, m, v, res);
    }
    else if (v[x].second == '0')
    {
        int cw = (i + v[x].first);
        if (cw > n)
            cw = cw - n;

        rec(cw, n, x + 1, m, v, res);
    }
    else
    {
        int acw = (i - v[x].first);
        if (acw <= 0)
            acw = n + acw;

        rec(acw, n, x + 1, m, v, res);
    }
    return 0;
}
void solve()
{
    di(n);
    di(m);
    di(x);
    vector<pair<int, char>> v;
    set<int> res;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    for (ll i = 0; i < m; i++)
    {
        di(x);
        char c;
        cin >> c;
        v.pb({x, c});
    }
    rec(x, n, 0, m, v, res);
    cout << res.size() << endl;

    for (auto &&i : res)
    {
        cout << i << " ";
    }
    cout << endl;
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