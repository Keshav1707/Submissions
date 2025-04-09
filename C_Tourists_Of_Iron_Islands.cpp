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
    di(m);

    vector<ll> v(m + 2, 0), va(m + 2, 0);

    for (ll i = 0; i < n; ++i)
    {
        di(a);
        di(b);
        di(c);
        v[a] += c;
        v[b + 1] -= c;
    }

    ll a = 0;

    for (ll i = 1; i <= m; ++i)
    {
        a += v[i];
        va[i] = a;
    }

    for (ll i = 1; i <= m; ++i)
    {
        cout << va[i] << " ";
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