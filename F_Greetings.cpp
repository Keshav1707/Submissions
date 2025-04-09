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

void solve()
{
    di(t);
    vector<pair<int, int>> p;
    map<int, int> m;
    ll sum = 0;

    for (size_t i = 0; i < t; i++)
    {
        di(a);
        di(b);
        p.pb({a, b});
        m[b] = i;
    }
    // int ct = 0;
    vecll v;
    for (auto &&i : m)
    {
        v.pb(i.first);
    }
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(all(p));
    int ans = 0;
    int ct = t;
    for (auto &&i : p)
    {
        auto ita = m.upper_bound(i.second);

        cout << t - ita->second << endl;
        t--;
    }
    cout << endl;
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