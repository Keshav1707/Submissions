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
int dp[1000009];
int rec(int target, int pind, vector<int> &v)
{
    ll m = 1000000007;
    if (target == 0)
        return 1;
    if (dp[target] != -1)
        return dp[target];
    int ans = 0;
    for (ll i = pind; i < v.size(); i++)
    {
        if (v[i] <= target)
            // cout << "m" << endl,
            ans = (ans % m + rec(target - v[i], pind + 1, v) % m) % m;
    }
    return dp[target] = ans;
}
void solve()
{
    di(x);
    di(n);
    vecll v(x);
    for (auto &&i : v)
    {
        cin >> i;
    }
    memset(dp, -1, sizeof(dp));
    int ans = rec(n, 0, v);
    cout << ans;
    //

    // dp[0] = 1;
    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 0; j < v.size(); j++)
    //     {
    //         if (i >= v[j])
    //             dp[i] = min(dp[i], dp[i - v[j]]);
    //     }
    // }
    // for (auto &&i : dp)
    // {
    //     cout << i << " ";
    // }

    // cout << dp[n];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}