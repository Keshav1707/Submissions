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
    vecll v;
    for (ll i = 0; i < 6; i++)
    {
        char c;
        cin >> c;
        v.pb(c);
    }
    for (ll i = 2; i < 6; i++)
    {
        /* code */
        if (v[i] == 'W' && v[i - 1] == 'W' && v[i - 2] == 'W')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO" << endl;
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