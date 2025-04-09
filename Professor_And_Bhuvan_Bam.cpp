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
    di(n);
    vector<int> v;
    int mini = 1e9;
    vector<pair<int, pair<int, int>>> p;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        p.pb({x, {x, x}});
        mini = min(mini, x);
        p.back().second.first = mini;
    }
    int maxi = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        maxi = max(maxi, v[i]);
        p[i].second.second = maxi;
    }
    int ans = 0;
    for (ll i = 0; i < n; i++)
    {
        int x = abs(p[i].second.second - p[i].second.first);
        int y = abs(p[i].second.first - p[i].second.second);
        ans = max({ans, x, y});
    }
    if (ans == 0)
    {
        cout << "NO\n0" << endl;
        return;
    }
    cout << "YES\n"
         << ans << endl;
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