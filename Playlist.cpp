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
    ll lo = 0, hi = 0, maxi = 1;
    map<int, int> m;
    while (hi < x)
    {
        m[v[hi]]++;
        // cout << m[hi] << endl;
        while (m[v[hi]] > 1)
        {
            m[v[lo]]--;
            lo++;
        }
        maxi = max(maxi, hi - lo + 1);
        hi++;
    }
    cout << maxi << endl;
}
signed main()
{
    solve();

    return 0;
}