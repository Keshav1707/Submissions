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
void dfs(int node, int parent, bool f, vector<set<int>> &adj, vector<int> &a, vector<int> &b)
{
    if (f)
        b.pb(node);
    else
        a.pb(node);

    for (auto &&i : adj[node])
    {
        if (i != parent)
            dfs(i, node, !f, adj, a, b);
    }
}

void solve()
{
    di(n);
    vector<set<int>> adj(n + 1);
    set<pairs> st;
    for (ll i = 0; i < n - 1; i++)
    {
        di(a);
        di(b);
        adj[a].insert(b);
        adj[b].insert(a);
        st.insert({min(a, b), max(a, b)});
    }

    vector<int> a, b;
    dfs(1, -1, 0, adj, a, b);

    int x = a.size() * b.size();
    x -= (n - 1);
    set<pairs> s;
    for (auto &&i : a)
    {
        for (auto &&j : b)
        {
            if (st.find({min(i, j), max(i, j)}) == st.end())
            {
                s.insert({min(i, j), max(i, j)});
            }
        }
    }
    int ct = x;
    if (x & 1)
    {
        cout << "FIRST" << endl;
        cout << s.begin()->first << " " << s.begin()->second << endl;
        cout.flush();
        s.erase(s.begin());
    }
    else
    {
        cout << "SECOND" << endl;
        cout.flush();
    }

    while (true)
    {
        di(x);
        di(y);
        if (x == -1 && y == -1)
            return;

        pairs p = {min(x, y), max(x, y)};
        s.erase(p);

        if (!s.empty())
        {
            cout << s.begin()->first << " " << s.begin()->second << endl;
            cout.flush();
            s.erase(s.begin());
        }
        if(s.empty())return;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

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