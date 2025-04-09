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
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    di(m);
    di(q);
    di(ta);
    di(tb);
    di(d);
    if (ta > tb)
        swap(ta, tb);
    if (ta == d || tb == d)
    {
        cout << 0 << endl;
    }
    else if (d >= ta && d <= tb)
    {
        cout << (tb - ta) / 2 << endl;
        return;
    }
    else if (d > tb)
    {
        cout << n - tb << endl;
    }
    else if (d < ta)
    {
        cout << ta - 1 << endl;
    }
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