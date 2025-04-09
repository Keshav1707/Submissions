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
void solve()
{
    di(n);
    di(k);
    vecll a, x;
    for (ll i = 0; i < n; i++)
    {
        di(c);
        a.pb(c);
    }
    for (ll i = 0; i < n; i++)
    {
        di(c);
        x.pb(c);
    }
    map<int, int> m;
    for (ll i = 0; i < n; i++)
    {
        m[abs(x[i])] += a[i];
    }
    int curpos = 0, curbul = 0;
    for (auto &&i : m)
    {
        curpos = (i.first - curpos);
        curbul += curpos * k;
        // cout << curbul << " " << curpos << endl;
        if (curbul < i.second)
        {
            cout << "NO" << endl;
            return;
        }
        curpos = i.first;
        curbul -= i.second;
    }
    cout << "YES" << endl;
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