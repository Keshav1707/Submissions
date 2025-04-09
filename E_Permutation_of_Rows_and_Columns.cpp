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
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
const int MOD = 1e9 + 7;
const ll N = 100005;
int dp[1000005];
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> a(n, vector<ll>(m));
    vector<vector<ll>> b(n, vector<ll>(m));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    set<set<int>> saa, sbb;
    for (ll i = 0; i < n; i++)
    {
        set<int> sa, sb;
        for (ll j = 0; j < m; j++)
        {
            sa.insert(a[i][j]);
            sb.insert(b[i][j]);
        }
        saa.insert(sa);
        sbb.insert(sb);
    }
    if (saa != sbb)
    {
        cout << "NO" << endl;
        return;
    }
    saa = set<set<int>>();
    sbb = set<set<int>>();
    for (ll i = 0; i < m; i++)
    {
        set<int> sa, sb;
        for (ll j = 0; j < n; j++)
        {
            sa.insert(a[j][i]);
            sb.insert(b[j][i]);
        }
        saa.insert(sa);
        sbb.insert(sb);
    }
    if (saa != sbb)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
