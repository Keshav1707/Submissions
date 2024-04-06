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
    di(h);
    di(w);
    di(xa);
    di(ya);
    di(xb);
    di(yb);
    if (xb - xa < 0)
    {
        cout << "Draw" << endl;
        return;
    }
    if (abs(yb - ya) >= xb - xa)
    {
        cout << "Draw" << endl;
        return;
    }
    cout << h << " " << w << " " << xb - xa << " ";
    cout << abs(yb - ya) << " " << abs(ya - yb) - (xb - xa) << " " << xb - xa + abs(ya - yb) << endl;
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