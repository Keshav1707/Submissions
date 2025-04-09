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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    vecll l, r, c, temp;
    multiset<ll> ra;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        l.pb(x);
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        r.pb(x);
        ra.insert(x);
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        c.pb(x);
    }
    sort(all(l), greater<int>());
    for (auto &&i : l)
    {
        auto it = ra.lower_bound(i);
        temp.pb(*it - i);
        ra.erase(it);
    }
    sort(all(c));
    sort(all(temp), greater<int>());

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        /* code */
        sum += temp[i] * c[i];
    }
    cout << sum << endl;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}