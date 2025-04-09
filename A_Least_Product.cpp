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
    di(x);
    int a = 0, b = 0, c = 0;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        if (n == 0)
            a++;
        if (n > 0)
            b++;
        else
            c++;
    }
    if (a > 0 || c % 2 == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl
             << 1 << " " << 0 << endl;
    }
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