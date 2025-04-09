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
    vecll v, o;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        if (x % 2 == 0)
            o.pb(x);
    }

    for (auto &&i : v)
    {
        cin >> i;
        if (i % 2 == 0)
            e++;
    }
    if (e == n)
    {
        cout << (n * (n + 1)) / 2;
        return;
    }
    int a = 1;
    for (int i = 1; i < n; i++)
    {
        if ((v[i] % 2) != 0 && (v[i - 1] % 2) != 0)
        {
            a++;
        }
        else if (v[i] % 2 == 0 && v[i - 1] % 2 != 0)
        {
            o.pb(a);
            a = 1;
        }
    }
    sort(rall(o));
    // a = o[0];
    // o.pb(a / 2);
    // o.pb((a - 1) / 2);
    // o.erase(o.begin());
    int sum = (n * (n + 1)) / 2;
    for (auto &&i : o)
    {
        cout << i << endl;
        sum -= ((i * (i + 1)) / 2);
    }

    cout << sum << endl;
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