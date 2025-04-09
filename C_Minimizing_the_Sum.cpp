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
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;

int dp[300009][20];

int rec(int ind, int k, const vector<int> &v)
{
    if (ind == v.size())
        return 0;
    if (dp[ind][k] != -1)
        return dp[ind][k];

    int a = v[ind] + rec(ind + 1, k, v);
    int b = INT_MAX, c = INT_MAX;

    if (ind > 0 && v[ind] > v[ind - 1] && k > 0)
    {
        vector<int> temp = v;
        temp[ind] = v[ind - 1];
        b = temp[ind - 1] + rec(ind + 1, k - 1, temp);
    }

    if (ind < v.size() - 1 && v[ind] > v[ind + 1] && k > 0)
    {
        vector<int> temp = v;
        temp[ind] = v[ind + 1];
        c = temp[ind + 1] + rec(ind + 1, k - 1, temp);
    }

    return dp[ind][k] = min({a, b, c});
}

void solve()
{
    di(n);
    di(k);
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    memset(dp, -1, sizeof(dp));
    cout << rec(0, k, v) << endl;
    // for (ll i = 0; i < n; i++)
    // {
    //     /* code */
    //     for (ll j = 0; j <= k; j++)
    //     {
    //         /* code */
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
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