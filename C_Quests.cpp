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
    int sum = 0, maxi = 0, ans = 0;
    vecll a, b;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        a.pb(x);
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        b.pb(x);
    }
    for (ll i = 0; i < n; i++)
    {
        if (i >= k)
            break;
        sum += a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + maxi * (k - i - 1));
    }
    cout << ans << endl;
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