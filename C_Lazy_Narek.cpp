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

void solve()
{
    di(n);
    di(m);
    vector<string> v;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    string goal = "narek";
    int dp[n + 1][5];

    for (int i = 0; i <= n; ++i)
        for (int j = 0; j < 5; ++j)
            dp[i][j] = -1e9;

    dp[0][0] = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll x = 0; x < 5; x++)
        {
            dp[i + 1][x] = dp[i][x];
        }

        for (ll startind = 0; startind < 5; startind++)
        {
            if (dp[i][startind] == -1e9)
                continue;
            int nwind = startind;
            int ct = 0;
            for (ll j = 0; j < m; j++)
            {
                if (v[i][j] == goal[nwind])
                {
                    ct++;
                    nwind++;
                    if (nwind == 5)
                        nwind = 0;
                }
                else if (v[i][j] == 'n' || v[i][j] == 'a' || v[i][j] == 'r' || v[i][j] == 'e' || v[i][j] == 'k')
                {
                    ct--;
                }
            }
            dp[i + 1][nwind] = max(dp[i + 1][nwind], dp[i][startind] + ct);
        }
    }

    int ans = 0;
    int ind = 0;
    for (auto &&i : dp[n])
    {
        ans = max(ans, i - 2 * ind);
        ind++;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

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