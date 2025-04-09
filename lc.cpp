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
int rec(int ind, int buy, vector<int> &v, vector<vector<int>> &dp)
{
    if (ind == v.size())
        return 0;
    int profit = 0;
    if (dp[ind][buy] != -1)
        return dp[ind][buy];
    if (buy == 0)
    {
        profit = max(-v[ind] + rec(ind + 1, 1, v, dp), rec(ind - 1, 0, v, dp));
    }
    else
    {
        profit = max(v[ind] + rec(ind + 1, 0, v, dp), rec(ind - 1, 1, v, dp));
    }
    return dp[ind][buy] = profit;
}
int maxProfit(vector<int> &prices)
{
    vector<vector<int>> dp(prices.size() + 1, vector<int>(10, -1));
    return rec(0, 0, prices, dp);
}
void solve()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
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