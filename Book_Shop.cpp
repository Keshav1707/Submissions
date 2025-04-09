#include <iostream>
#include <vector>
#include <cstring>
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
const int MOD = 1e9 + 7;

int dp[100005];

void solve()
{
    di(n);
    di(x);
    vector<pairs> v;
    for (ll i = 0; i < n; i++)
    {
        di(a);
        v.pb({a, 0});
    }
    for (ll i = 0; i < n; i++)
    {
        di(a);
        v[i].second = a;
    }
    memset(dp, 0, sizeof(dp));
    for (auto &&j : v)
    {
        for (ll i = x; i >= j.first; i--)
        {

            dp[i] = max(dp[i], dp[i - j.first] + j.second);
        }
    }
    cout << dp[x] << endl;
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
