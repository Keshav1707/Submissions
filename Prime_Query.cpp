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
    di(x);
    vecll v, va, vb;
    va.pb(0);
    vb.pb(0);
    int a = 0, b = 0;
    for (int i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
        if (n == 1)
            a++;
        if (n == 2)
            b++;
        va.pb(a);
        vb.pb(b);
    }
    di(q);
    while (q--)
    {
        di(l);
        di(r);
        di(k);
        int ones = va[r] - va[l - 1];
        int twos = vb[r] - vb[l - 1];

        // cout << ones << " " << nones << endl;
        if (ones == 0 && twos == 0)
        {
        }
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