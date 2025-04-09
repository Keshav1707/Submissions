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
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
void solve()
{
    di(n);
    di(k);
    di(q);
    vector<ll> v, va;
    v.pb(0);
    va.pb(0);
    for (ll i = 0; i < k; i++)
    {
        di(x);
        v.pb(x);
    }
    for (ll i = 0; i < k; i++)
    {
        di(x);
        va.pb(x);
    }
    vector<ll> speed;
    speed.pb(0);
    int prevp = 0, prevt = 0;
    for (size_t i = 1; i <= k; i++)
    {
        double a = (v[i] - prevp) / (va[i] - prevt);
        speed.pb(a);
        prevp = v[i];
        prevt = va[i];
    }
    while (q--)
    {
        di(x);
        if (x == 0)
        {
            cout << 0 << " ";
        }
        else if (x == n)
        {
            cout << (int)va.back() << " ";
        }
        else
        {
            int i = (upper_bound(all(v), x) - v.begin());
            double time = va[i] - va[i - 1];
            double dis = v[i] - v[i - 1];
            double ans = time / dis * (x - v[i - 1]);
            cout << (int)(va[i - 1] + ans) << " ";
        }
    }

    cout << endl;
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