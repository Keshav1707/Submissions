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
struct pair_hash
{
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2> &p) const
    {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
};

// Custom hash function for state (two pairs)
struct state_hash
{
    size_t operator()(const pair<pair<int, int>, pair<int, int>> &state) const
    {
        pair_hash h;
        return h(state.first) ^ (h(state.second) << 1);
    }
};

int dfs(pair<int, int> nodea, pair<int, int> nodeb, vector<vector<char>> &grid, int n,
        unordered_map<pair<pair<int, int>, pair<int, int>>, int, state_hash> &dp)
{

    // Base cases
    if (nodea.first > nodeb.first || nodea.second > nodeb.second)
        return 0;
    if (nodea == nodeb)
        return 1;
    if ((nodea.first == nodeb.first && abs(nodea.second - nodeb.second) == 1) ||
        (nodea.second == nodeb.second && abs(nodea.first - nodeb.first) == 1))
        return 1;

    // Create state
    auto state = make_pair(nodea, nodeb);

    // Check if state exists in dp
    if (dp.count(state))
        return dp[state];

    int total = 0;

    vector<pair<pair<int, int>, pair<int, int>>> moves = {
        {{1, 0}, {-1, 0}}, // Down-Up
        {{1, 0}, {0, -1}}, // Down-Left
        {{0, 1}, {-1, 0}}, // Right-Up
        {{0, 1}, {0, -1}}  // Right-Left
    };

    for (auto move : moves)
    {
        int new_a_x = nodea.first + move.first.first;
        int new_a_y = nodea.second + move.first.second;
        int new_b_x = nodeb.first + move.second.first;
        int new_b_y = nodeb.second + move.second.second;

        if (new_a_x < n && new_a_y < n && new_b_x >= 0 && new_b_y >= 0)
        {
            if (grid[new_a_x][new_a_y] == grid[new_b_x][new_b_y])
            {
                total += dfs({new_a_x, new_a_y}, {new_b_x, new_b_y}, grid, n, dp);
            }
        }
    }

    return dp[state] = total;
}
void solve()
{
    di(n);
    vector<vector<char>> grid(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            grid[i][j] = c;
        }
    }
    unordered_map<pair<pair<int, int>, pair<int, int>>, int, state_hash> dp;
    cout << dfs({0, 0}, {n - 1, n - 1}, grid, n, dp);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    freopen("palpath.in", "r", stdin);
    freopen("palpath.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}