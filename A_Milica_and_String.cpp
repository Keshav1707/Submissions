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
    string s;
    cin >> s;
    vecll v, va;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            v.pb(i + 1);
        else
            va.pb(i + 1);
    }
    if (v.size() == k)
        cout << 0 << endl;
    else
    {
        if (v.size() > k)
        {
            cout << 1 << endl;
            cout << v[v.size() - 1 - k] << " A" << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << va[k - v.size() - 1] << " B" << endl;
        }
    }
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