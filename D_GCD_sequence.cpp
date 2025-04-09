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
    vecll v(n), va;
    for (auto &&i : v)
    {
        cin >> i;
    }

    for (ll i = 0; i < n - 1; i++)
    {
        va.pb(gcd(v[i], v[i + 1]));
    }
    int ind = -1;
    for (size_t i = 0; i < n - 2; i++)
    {
        // cout << va[i] << " " << va[i + 1] << endl;
        if (va[i] > va[i + 1])
        {

            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        cout << "YES" << endl;
        return;
    }
    vecll ansa, ansb, ansc, x, y, z;
    for (ll i = 0; i < v.size(); i++)
    {
        if (i != ind)
            ansa.pb(v[i]);
        if (i != ind + 1)
            ansb.pb(v[i]);
        if (i != ind + 2)
            ansc.pb(v[i]);
    }

    for (ll i = 0; i < ansa.size() - 1; i++)
    {
        x.pb(gcd(ansa[i], ansa[i + 1]));
        y.pb(gcd(ansb[i], ansb[i + 1]));
        z.pb(gcd(ansc[i], ansc[i + 1]));
    }
    bool fa = 0, fb = 0, fc = 0;

    for (ll i = 0; i < x.size() - 1; i++)
    {
        if (x[i] > x[i + 1])

            fa = 1;
        if (y[i] > y[i + 1])

            fb = 1;
        if (z[i] > z[i + 1])

            fc = 1;
    }
    // cout << endl;
    // for (auto &&i : x)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto &&i : y)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto &&i : z)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << fa << " " << fb << " " << fc << endl;
    if (fc && fb && fa)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    // cout << endl;
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