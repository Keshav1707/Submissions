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
int binpow(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b & 1)
        return a * res * res;
    else
        return res * res;
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
long long dist(pair<int, int> a, pair<int, int> b)
{
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}
void solve()
{
    di(h);
    di(g);
    vector<pairs> vh(h + 1), vg(g + 1);
    vh[0] = {0, 0};
    vg[0] = {0, 0};
    for (ll i = 1; i <= h; i++)
    {
        di(x);
        di(y);
        vh[i] = {x, y};
    }
    for (ll i = 0; i < g; i++)
    {
        di(x);
        di(y);
        vg[i + 1] = {x, y};
    }
    vector<vector<vector<int>>> dp(h + 1, vector<vector<int>>(g + 1, vector<int>(2, 1e18)));
    dp[1][0][0] = 0;
    for (int i = 0; i <= h; ++i)
    {
        for (int j = 0; j <= g; ++j)
        {

            if (i > 0)
                dp[i][j][0] = min(dp[i][j][0], dp[i - 1][j][0] + dist(vh[i], vh[i - 1]));
            if (j > 0)
                dp[i][j][1] = min(dp[i][j][1], dp[i][j - 1][1] + dist(vg[j], vg[j - 1]));
            if (i > 0 && j > 0)
            {
                dp[i][j][0] = min(dp[i][j][0], dp[i - 1][j][1] + dist(vh[i], vg[j]));
                dp[i][j][1] = min(dp[i][j][1], dp[i][j - 1][0] + dist(vh[i], vg[j]));
            }
        }
    }
    cout << dp[h][g][0] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    freopen("checklist.in", "r", stdin);
    freopen("checklist.out", "w", stdout);

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