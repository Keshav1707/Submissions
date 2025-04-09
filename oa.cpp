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
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb({dis(0, 0, x, y), {x, y}});
    }
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << v[i].second.first << " " << v[i].second.second << endl;
    }
}
signed main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}