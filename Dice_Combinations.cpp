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

void solve()
{
    di(n);
    ll m = 1000000007;
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j < 7; j++)
        {
            if (i >= j)
                dp[i] = (dp[i] % m + dp[i - j] % m) % m;
        }
    }

    cout << dp[n];
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