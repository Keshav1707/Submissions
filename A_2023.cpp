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
    di(k);
    vecll v;
    ll pro = 1;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        pro *= x;
    }
    if (2023 % pro == 0)
    {
        cout << "YES" << endl;
        cout << 2023 / pro << " ";
        for (ll i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
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