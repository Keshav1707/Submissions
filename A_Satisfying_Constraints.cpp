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
    int a = 0, b = INT_MAX, c = 0;
    vector<int> v;
    for (ll i = 0; i < x; i++)
    {
        di(q);
        di(n);
        if (q == 1)
        {
            a = max(a, n);
        }
        else if (q == 2)
        {
            b = min(b, n);
        }
        else
        {
            v.pb(n);
        }
    }
    if (b < a)
        cout << 0 << endl;
    else
    {
        for (auto &&i : v)
        {
            if (i >= a && i <= b)
                c++;
        }
        cout << b - a - c + 1 << endl;
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