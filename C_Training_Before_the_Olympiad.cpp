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
    vecll v;
    ll o = 0, e = 0, sum = 0;

    for (ll i = 0; i < n; i++)
    {
        di(x);
        sum += x;
        e += (x % 2);
        ll suma = e / 3;
        ;
        if (e % 3 == 1)
            suma++;

        if (i == 0)
            cout << sum << " ";
        else
            cout << sum - suma << " ";
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