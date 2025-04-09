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
    int a = 0, b = 0, c = 0;
    int z = 0;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        if (n == 1)
            a++;
        else if (n == 2)
            b++;
        if (n == 0)
            z = (z % MOD + (a + b) % MOD) % MOD;
        else if (n == 1)
            z = (z % MOD + (b) % MOD) % MOD;
    }

    cout << z % MOD << endl;
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