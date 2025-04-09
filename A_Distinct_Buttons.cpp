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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    ll a = 0, b = 0, c = 0, d = 0;
    for (size_t i = 0; i < n; i++)
    {
        di(x);
        di(y);
        if (x > 0)
            a++;
        if (x < 0)
            b++;
        if (y > 0)
            c++;
        if (y < 0)
            d++;
    }
    // cout << a << " " << b << " " << c << " " << d << endl;
    if (a == 0 || b == 0 || c == 0 || d == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}