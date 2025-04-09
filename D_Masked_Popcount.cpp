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
const int MOD = 998244353;
void solve()
{
    di(n);
    di(m);
    int a = 1 << (int)(ceil(log2(m)));
    int b = n / a;
    int sum = 0;
    for (ll i = 0; i < 32; i++)
    {
        sum += __popcount(i & 17);
        cout << __popcount(i & 9) << " " << __popcount((i + 32) & 9) << endl;
    }
    cout << sum << " a" << endl;
    for (ll i = 0; i < a; i++)
    {
        cout << __popcount(i & m) << endl;
        sum = (sum % MOD + __popcount(i & m) % MOD) % MOD;
    }

    cout << a << " " << b << " " << sum << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}