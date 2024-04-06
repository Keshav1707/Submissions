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
int rec(int ind, int value, vector<int> &v, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        return value;
    }
    int notTake = rec(ind - 1, value, v, dp);
    int take = INT_MAX;
    if (dp[ind][value] != -1)
        return dp[ind][value];
    if (v[ind] <= value)
    {
        take = 1 + rec(ind, value - v[ind], v, dp);
    }
    return dp[ind][value] = min(take, notTake);
}
void solve()
{
    di(x);
    vector<int> v = {1, 3, 6, 10};
    int res = x / 15;
    x = x % 15;
    vector<vector<int>> dp(v.size() + 1, vector<int>(x + 2, -1));
    cout << res + rec(3, x, v, dp) << endl;
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