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
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int a = 2;
    while (true)
    {
        unordered_map<int, int> m;
        for (auto &&i : v)
        {
            m[i % a]++;
        }
        if (m.size() == 2)
        {
            cout << a << endl;
            return;
        }
        else
            a *= 2;
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