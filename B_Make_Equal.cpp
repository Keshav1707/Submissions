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
    di(x);
    vecll v;
    ll sum = 0;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
        sum += n;
    }
    ll eq = sum / x;
    ll curamt = 0;
    for (auto &&i : v)
    {
        if (i > eq)
        {
            curamt += (i - eq);
        }
        else if (i < eq)
        {
            if (curamt + i < eq)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                curamt -= (eq - i);
                i = eq;
            }
        }
    }
    cout << "YES" << endl;
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