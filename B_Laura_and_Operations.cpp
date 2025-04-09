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
    di(a);
    di(b);
    di(c);
    a = a & 1;
    b = b & 1;
    c = c & 1;
    // cout << a << b << c << endl;
    if (a == b && b == c)
        cout << "1 1 1" << endl;
    else
    {
        if (a == b)
            cout << "0 0 1" << endl;
        if (b == c)
            cout << "1 0 0" << endl;
        if (a == c)
            cout << "0 1 0" << endl;
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