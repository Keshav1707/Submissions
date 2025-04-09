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
long double dis(long double a, long double b, long double c, long double d)
{
    return sqrtl(abs(a - c) * abs(a - c) + abs(d - b) * abs(d - b));
}
void solve()
{
    long double px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    long double a = max(dis(0, 0, ax, ay), dis(ax, ay, px, py));
    long double b = max(dis(0, 0, bx, by), dis(bx, by, px, py));
    long double c = min(a, b);
    long double d = min(dis(0, 0, ax, ay), dis(0, 0, bx, by));
    long double e = min(dis(ax, ay, px, py), dis(bx, by, px, py));

    long double t = dis(ax, ay, bx, by) / 2.0;
    long double ans = max({d, e, t});
    ans = min(ans, c);
    cout << setprecision(11) << ans << endl;
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