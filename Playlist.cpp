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
    vecll v;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    ll lo = 0, hi = 0, maxi = 0;
    map<int, int> m;
    for (auto &&i : v)
    {
        m[i]++;
        hi++;
        if (m[i] > 1)
        {
            lo = hi;
            cout << hi << " ";
        }
        maxi = max(hi - lo + 1, maxi);
    }
    cout << maxi << endl;
}
signed main()
{
    solve();

    return 0;
}