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
    di(a);
    di(b);
    vecll v, va;
    for (ll i = 0; i < a; i++)
    {
        di(x);
        v.pb(x);
    }
    for (ll i = 0; i < b; i++)
    {
        di(x);
        va.pb(x);
    }
    sort(all(v));
    sort(all(va), greater<int>());
    int sum = 0;
    int beg = 0;
    while (true)
    {
        /* code */
        if (v.size() > beg)
            break;
        if (abs(v[beg] - va[beg]) >= abs(v.back() - va.back()))
        {
            sum += abs(v[beg] - va[beg]);
            beg++;
        }
        else
        {
            sum += abs(v.back() - va.back());
            va.pop_back();
            v.pop_back();
        }
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