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

int rec(int ind, vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &dp)
{
    if (ind == a.size())
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int nottake = rec(ind + 1, a, b, c, dp);
    int t = lower_bound(all(a), a[ind] + b[ind]) - a.begin();
    // cout << t << " " << a[ind] + b[ind] << " " << ind << endl;
    int take = (c[ind]) + rec(t, a, b, c, dp);
    return dp[ind] = max(take, nottake);
}
void solve()
{
    di(n);
    vector<pair<int, pair<int, int>>> v;
    for (ll i = 0; i < n; i++)
    {
        di(a);
        di(b);
        di(c);
        v.pb({a, {b, c}});
    }

    sort(all(v));
    vector<int> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        a.pb(v[i].first);
        b.pb(v[i].second.first);
        c.pb(v[i].second.second);
    }
    vector<int> dp(n + 2, -1);
    cout << rec(0, a, b, c, dp);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}