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
    di(x);
    int a = 0;
    ll sum = 0;
    vecll v;
    for (ll i = 0; i < x; i++)
    {
        char c;
        cin >> c;
        if (c == '.')
            a++;
        else if (c == '#')
        {

            v.pb(a);
            a = 0;
        }
    }
    v.pb(a);
    sort(all(v));
    if (v.back() > 2)
        cout << 2 << endl;
    else
        cout << accumulate(all(v), 0) << endl;
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