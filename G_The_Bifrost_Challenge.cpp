#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define endl "\n"

const int N = 100005;
const int LG = 20;

vector<int> level;
vector<vector<int>> dp, mx;
vector<vector<pair<int, int>>> v;
int n;

void init(int size)
{

    n = size;
    level.resize(n + 1);
    v.clear();
    v.resize(n + 1);

    dp.resize(LG);
    mx.resize(LG);
    for (int i = 0; i < LG; i++)
    {
        dp[i].resize(n + 1);
        mx[i].resize(n + 1);
    }
}

void dfs_lca(int a, int par, int lev)
{
    dp[0][a] = par;
    level[a] = lev;
    for (auto i : v[a])
    {
        if (i.first == par)
            continue;
        mx[0][i.first] = i.second;
        dfs_lca(i.first, a, lev + 1);
    }
}

void find_ancestor()
{
    for (int i = 1; i < LG; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i - 1][dp[i - 1][j]];
            mx[i][j] = max(mx[i - 1][j], mx[i - 1][dp[i - 1][j]]);
        }
    }
}

int getMax(int a, int b)
{
    if (level[b] < level[a])
        swap(a, b);

    int ans = 0;
    int diff = level[b] - level[a];

    while (diff > 0)
    {
        int log = log2(diff);
        ans = max(ans, mx[log][b]);
        b = dp[log][b];
        diff -= (1 << log);
    }

    if (a == b)
        return ans;

    for (int i = LG - 1; i >= 0; i--)
    {
        if (dp[i][a] != dp[i][b])
        {
            ans = max({ans, mx[i][a], mx[i][b]});
            a = dp[i][a];
            b = dp[i][b];
        }
    }

    ans = max({ans, mx[0][a], mx[0][b]});
    return ans;
}

void solve()
{
    di(x);
    di(q);

    init(x);

    for (ll i = 0; i < x - 1; i++)
    {
        di(a);
        di(b);
        di(c);
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    dfs_lca(1, 0, 0);
    find_ancestor();

    while (q--)
    {
        di(a);
        di(b);
        cout << getMax(a, b) << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}