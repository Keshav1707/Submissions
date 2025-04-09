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
    vecll v, va;
    di(x);
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    for (ll i = 0; i < x; i++)
    {
        di(n);
        va.pb(n);
    }
    int i = 0;
    int c = 0;
    while (i < va.size())
    {
        if (v[i] > va[i])
            v.insert(v.begin() + i, va[i]), c++;
        i++;
    }
    cout << c << endl;
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