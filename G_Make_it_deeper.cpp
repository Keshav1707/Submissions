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
pair<int, int> findDeepestNode(const vector<vector<int>> &tree, int root)
{
    vector<int> depth(tree.size(), -1);
    queue<int> q;
    q.push(root);
    depth[root] = 1;

    int deepestNode = root;
    int maxDepth = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int child : tree[node])
        {
            if (depth[child] == -1)
            {
                depth[child] = depth[node] + 1;
                q.push(child);

                if (depth[child] > maxDepth)
                {
                    maxDepth = depth[child];
                    deepestNode = child;
                }
            }
        }
    }

    return {deepestNode, maxDepth};
}

vector<int> findPath(const vector<vector<int>> &tree, int root, int target)
{
    vector<int> path;
    vector<bool> visited(tree.size(), false);

    function<bool(int)> dfs = [&](int node)
    {
        visited[node] = true;
        path.push_back(node);

        if (node == target)
            return true;

        for (int child : tree[node])
        {
            if (!visited[child])
            {
                if (dfs(child))
                    return true;
            }
        }

        path.pop_back();
        return false;
    };

    dfs(root);
    return path;
}

int calculateSubtreeHeight(const vector<vector<int>> &tree, int node, vector<bool> &visited)
{
    visited[node] = true;
    int maxHeight = 0;

    for (int child : tree[node])
    {
        if (!visited[child])
        {
            maxHeight = max(maxHeight, calculateSubtreeHeight(tree, child, visited));
        }
    }

    return maxHeight + 1;
}

pair<int, int> findBestSubtree(const vector<vector<int>> &tree, const vector<int> &pathToDeepest)
{
    vector<bool> inPath(tree.size(), false);
    for (int node : pathToDeepest)
    {
        inPath[node] = true;
    }

    int bestSubtreeRoot = -1;
    int bestHeight = -1;

    for (int v = 2; v < tree.size(); v++)
    {
        if (!inPath[v])
        {
            vector<bool> visited(tree.size(), false);

            for (int node : pathToDeepest)
            {
                visited[node] = true;
            }

            int height = calculateSubtreeHeight(tree, v, visited);
            if (height > bestHeight)
            {
                bestHeight = height;
                bestSubtreeRoot = v;
            }
        }
    }

    return {bestSubtreeRoot, bestHeight};
}

int maximizeTreeHeight(vector<vector<int>> &tree)
{
    int n = tree.size() - 1;

    auto [deepestNode, currentHeight] = findDeepestNode(tree, 1);

    vector<int> pathToDeepest = findPath(tree, 1, deepestNode);

    auto [bestSubtreeRoot, subtreeHeight] = findBestSubtree(tree, pathToDeepest);

    if (bestSubtreeRoot != -1)
    {
        return currentHeight + subtreeHeight;
    }

    return currentHeight;
}
void solve()
{
    di(n);
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << maximizeTreeHeight(adj) << endl;
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