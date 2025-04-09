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
    di(n);
    vector<pairs> v;
    for (ll i = 0; i < n; ++i)
    {
        di(x);
        v.pb({x, 0});
    }
    v[0].second = 1;
    v.back().second = -1;
    for (ll i = 1; i < n - 1; ++i)
    {
        if (v[i].first - v[i - 1].first > v[i + 1].first - v[i].first)
            v[i].second = 1;
        else
            v[i].second = -1;
    }
    ll fsum = 0, bsum = 0;
    vecll f, b;
    f.pb(0);
    b.pb(0);
    for (ll i = 1; i < n; ++i)
    {
        if (v[i - 1].second == -1)
        {
            fsum += (v[i].first - v[i - 1].first);
        }
        else
            fsum++;
        f.pb(fsum);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        if (v[i + 1].second == 1)
            bsum += (v[i + 1].first - v[i].first);
        else
            bsum++;
        b.pb(bsum);
    }
    reverse(all(b));

    di(q);
    while (q--)
    {
        di(a);
        di(bx);
        int mov = (bx - a);
        if (mov > 0)
            cout << f[bx - 1] - f[a - 1];
        else
            cout << b[bx - 1] - b[a - 1];
        cout << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}