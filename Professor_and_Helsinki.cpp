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
    di(m);
    string s;
    cin >> s;
    int a = 1, b = 1;
    for (auto &&i : s)
    {
        if (i == 'c')
        {
            a *= 42;
            a %= m;
        }
        else if (i == 'v')
        {
            a *= 5;
            a %= m;
        }
        else
        {
            a *= 5;
            a %= m;
        }
    }
    for (auto &&i : s)
    {
        if (i == 'c')
        {
            b *= 42;
            b %= m;
        }
        else if (i == 'v')
        {
            b *= 5;
            b %= m;
        }
        else
        {
            b *= 10;
            b %= m;
        }
    }
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // cout << a << " " << b << endl;
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