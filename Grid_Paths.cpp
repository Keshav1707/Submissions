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
int dp[1009][1009];

void solve()
{
    di(x);
    vector<vector<char>> m(x);
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < x; j++)
        {
            char c;
            cin >> c;
            m[i].pb(c);
        }
    }
    if (m[0][0] == '*')
    {
        cout << 0;
        return;
    }

    memset(dp, 0, sizeof(dp));
    for (ll i = 0; i < x; i++)
    {
        if (m[0][i] == '*')
            break;
        dp[0][i] = 1;
    }
    for (ll i = 0; i < x; i++)
    {
        if (m[i][0] == '*')
            break;
        dp[i][0] = 1;
    }
    for (ll i = 1; i < x; i++)
    {
        for (ll j = 1; j < x; j++)
        {
            if (m[i][j] == '*')
                continue;
            if (m[i - 1][j] != '*')
                dp[i][j] += dp[i - 1][j] % MOD;

            if (m[i][j - 1] != '*')
                dp[i][j] += dp[i][j - 1] % MOD;
            dp[i][j] %= MOD;
        }
        // cout << endl;
    }

    cout << dp[x - 1][x - 1] << endl;
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