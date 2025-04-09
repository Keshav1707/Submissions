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
int rec(int target, vector<int> &v)
{
    if (target == 0)
        return 0;
    if (dp[target] != -1)
        return dp[target];
    int ans = INT_MAX;
    for (ll i = 0; i < v.size(); i++)
    {

        if (v[i] <= target)
            // cout << "m" << endl,
            ans = min(ans, 1 + rec(target - v[i], v));
    }
    return dp[target] = ans;
}
void solve()
{
    di(n);
    di(x);
    vecll v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    for (int i = 0; i <= x; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int weight = v[i - 1]; weight <= x; weight++)
        {
            dp[weight] = min(dp[weight], dp[weight - v[i - 1]] + 1);
        }
    }

    cout << (dp[x] == INT_MAX ? -1 : dp[x]) << endl;
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