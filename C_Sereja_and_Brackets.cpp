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
pair<int, pair<int, int>> seg[4000009];
void build(int ind, int lo, int hi, string &s)
{
    if (lo == hi)
    {
        if (s[lo] == ')')
        {
            seg[ind] = {0, {0, 1}};

            return;
        }
        else
        {
            seg[ind] = {0, {1, 0}};
            return;
        }
    }
    int mid = (lo + hi) >> 1;
    build(2 * ind + 1, lo, mid, s);
    build(2 * ind + 2, mid + 1, hi, s);
    int mini = min(seg[2 * ind + 1].second.first, seg[2 * ind + 2].second.second);
    int x = seg[2 * ind + 1].first + seg[2 * ind + 2].first + mini;
    int y = seg[2 * ind + 1].second.first + seg[2 * ind + 2].second.first - min(seg[2 * ind + 1].second.first, seg[2 * ind + 2].second.second);
    int z = seg[2 * ind + 1].second.second + seg[2 * ind + 2].second.second - min(seg[2 * ind + 1].second.first, seg[2 * ind + 2].second.second);
    seg[ind] = {x, {y, z}};
}
pair<int, pair<int, int>> query(int ind, int l, int r, int lo, int hi)
{
    if (l <= lo && r >= hi)
        return seg[ind];
    if (lo > r || hi < l)
        return {0, {0, 0}};
    int mid = (lo + hi) >> 1;
    pair<int, pair<int, int>> left = query(2 * ind + 1, l, r, lo, mid);
    pair<int, pair<int, int>> right = query(2 * ind + 2, l, r, mid + 1, hi);
    int mini = min(left.second.first, right.second.second);
    int x = left.first + right.first + mini;
    int y = left.second.first + right.second.first - min(left.second.first, right.second.second);
    int z = left.second.second + right.second.second - min(left.second.first, right.second.second);
    return {x, {y, z}};
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    build(0, 0, n - 1, s);
    di(q);

    while (q--)
    {
        di(a);
        di(b);
        a--;
        b--;

        pair<int, pair<int, int>> p = query(0, a, b, 0, n - 1);
        cout << p.first * 2 << endl;
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