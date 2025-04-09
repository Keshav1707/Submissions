#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define sz(x) ((int)(x).size())
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl "\n"
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
typedef priority_queue<int, vector<int>, greater<int>> minheap;
typedef priority_queue<int> maxheap;
const int MOD = 1e9 + 7;
/*......................... Bit manupulation tricks ...................*/

// a|b = a⊕b + a&b
// a⊕(a&b) = (a|b)⊕b
// b⊕(a&b) = (a|b)⊕a
// (a&b)⊕(a|b) = a⊕b

// a+b = a|b + a&b
// a+b = a⊕b + 2(a&b)

// a-b = (a⊕(a&b))-((a|b)⊕a)
// a-b = ((a|b)⊕b)-((a|b)⊕a)
// a-b = (a⊕(a&b))-(b⊕(a&b))
// a-b = ((a|b)⊕b)-(b⊕(a&b))

/*...............................................................................*/

class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
void printvector(vecll &v)
{
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
long long binpow(long long a, long long b)
{
    a %= MOD;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);

        if (hash1 != hash2)
        {
            return hash1 ^ hash2;
        }

        // If hash1 == hash2, their XOR is zero.
        return hash1;
    }
};
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int dfs(int a, bool f, vector<vecll> &adja, vector<vecll> &adjb, int &n, int par, int &x, vector<vector<int>> &dp, vector<vector<bool>> &visited)
{
    if (a == n)
        return 0;
    if (dp[a][f] != -1)
        return dp[a][f];
    // if (visited[a][f])
    //     return 1e18;
    // visited[a][f] = true;
    int ans = 1e18;
    if (f)
    {
        for (auto i : adja[a])
        {
            if (i != par)
            {
                ans = min({ans, 1 + dfs(i, f, adja, adjb, n, a, x, dp, visited), 1 + x + dfs(i, !f, adja, adjb, n, a, x, dp, visited)});
            }
        }
    }
    else
    {
        for (auto i : adjb[a])
        {
            if (i != par)
            {
                ans = min({ans, 1 + dfs(i, f, adja, adjb, n, a, x, dp, visited), 1 + x + dfs(i, !f, adja, adjb, n, a, x, dp, visited)});
            }
        }
    }

    return dp[a][f] = (ans >= 1e18 ? 1e18 : ans);
}
void solve()
{
    di(n);
    di(m);
    di(x);
    vector<vecll> adja(n + 1), adjb(n + 1);
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    vector<vector<bool>> visited(n + 1, vector<bool>(2, false));
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        adja[a].pb(b);
        adjb[b].pb(a);
    }

    int res = dfs(1, 1, adja, adjb, n, 0, x, dp, visited);
    fill(dp.begin(), dp.end(), vector<int>(2, -1));
    fill(visited.begin(), visited.end(), vector<bool>(2, false));
    res = min(res, x + dfs(1, 0, adja, adjb, n, 0, x, dp, visited));
    cout << (res == 1e18 ? -1 : res) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}