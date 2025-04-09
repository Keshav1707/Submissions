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
    vecll v(n), va(n + 1);
    for (auto &&i : v)
    {
        cin >> i;
    }
    for (auto &&i : va)
    {
        cin >> i;
    }
    int a = 0;
    bool f = 0;
    int minadd = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        a += abs(v[i] - va[i]);
        if (min(v[i], va[i]) <= va.back() && max(v[i], va[i]) >= va.back())
        {
            f = 1;
        }
        minadd = min(abs(va.back() - va[i]), minadd);
        minadd = min(abs(va.back() - v[i]), minadd);
    }
    if (f)
    {
        cout << a + 1 << endl;
        return;
    }
    else
    {
        cout << a + minadd + 1 << endl;
        return;
    }
    cout << a << " " << minadd << " " << f << endl;
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