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
    int r = x * x;
    int r1 = (x + 1) * (x + 1);
    int a = 0;
    for (ll i = 0; i < x + 1; i++)
    {
        int j = sqrt(r1 - i * i);
        if (j * j + i * i >= r1)
            break;
        a += j;
    }
    for (ll i = 0; i < x; i++)
    {
        int j = sqrt(r - i * i);
        if (j * j + i * i < r)
            break;
        a -= j;
    }
    cout << a << endl;
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