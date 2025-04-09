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
    vector<int> v = {4, 8, 15, 16, 23, 42};
    map<int, pair<int, int>> m;
    for (ll i = 0; i < 6; i++)
    {
        for (ll j = 0; j < 6; j++)
        {
            m[v[i] * v[j]] = {v[i], v[j]};
        }
    }
    vecll ans(7);
    cout << "? 1 2" << endl;
    cout.flush();
    di(x);
    cout << "? 2 3" << endl;
    cout.flush();
    di(y);
    pairs p = m[x], pa = m[y];
    if (p.first == pa.first)
    {
        ans[2] = p.first;
        ans[1] = p.second;
        ans[3] = pa.second;
    }
    if (p.first == pa.second)
    {
        ans[2] = p.first;
        ans[1] = p.second;
        ans[3] = pa.first;
    }
    if (p.second == pa.first)
    {
        ans[2] = p.second;
        ans[1] = p.first;
        ans[3] = pa.second;
    }
    if (p.second == pa.second)
    {
        ans[2] = p.second;
        ans[1] = p.first;
        ans[3] = pa.first;
    }
    cout << "? 4 5" << endl;
    cout.flush();
    cin >> x;
    cout << "? 5 6" << endl;
    cout.flush();
    cin >> y;
    p = m[x], pa = m[y];
    if (p.first == pa.first)
    {
        ans[5] = p.first;
        ans[4] = p.second;
        ans[6] = pa.second;
    }
    if (p.first == pa.second)
    {
        ans[5] = p.first;
        ans[4] = p.second;
        ans[6] = pa.first;
    }
    if (p.second == pa.first)
    {
        ans[5] = p.second;
        ans[4] = p.first;
        ans[6] = pa.second;
    }
    if (p.second == pa.second)
    {
        ans[5] = p.second;
        ans[4] = p.first;
        ans[6] = pa.first;
    }
    cout << "! ";
    for (ll i = 1; i < 7; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout.flush();
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