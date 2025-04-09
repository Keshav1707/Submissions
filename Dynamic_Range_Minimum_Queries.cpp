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
vector<pairs> seg(100);
void build(int ind, int lo, int hi, vector<int> &v)
{
    if (lo == hi)
    {
        seg[ind] = {v[lo], 1};
        return;
    }
    int mid = (lo + hi) >> 1;
    build(2 * ind + 1, lo, mid, v);
    build(2 * ind + 2, mid + 1, hi, v);
    if (seg[2 * ind + 1].first == seg[2 * ind + 2].first)
        seg[ind] = {seg[2 * ind + 1].first, seg[2 * ind + 1].second + seg[2 * ind + 2].second};
    else
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}
pairs query(int ind, int l, int r, int lo, int hi)
{
    if (l <= lo && r >= hi)
        return seg[ind];
    if (lo > r || hi < l)
        return {INT_MAX, INT_MAX};

    int mid = (lo + hi) >> 1;
    pairs left = query(2 * ind + 1, l, r, lo, mid);
    pairs right = query(2 * ind + 2, l, r, mid + 1, hi);
    if (left.first == right.first)
        return {left.first, left.second + right.second};
    else
        return min(left, right);
}
void update(int ind, int lo, int hi, int val, int node)
{
    if (lo == hi)
    {
        seg[ind] = {val, 1};
        return;
    }
    else
    {
        int mid = (lo + hi) >> 1;
        if (node <= mid && node >= lo)
            update(2 * ind + 1, lo, mid, val, node);
        else
            update(2 * ind + 2, mid + 1, hi, val, node);

        if (seg[2 * ind + 1].first == seg[2 * ind + 2].first)
            seg[ind] = {seg[2 * ind + 1].first, seg[2 * ind + 1].second + seg[2 * ind + 2].second};
        else
            seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    build(0, 0, n - 1, v);
    while (q--)
    {
        di(x);
        di(l);
        di(r);
        if (x == 1)
        {
            l--;
            update(0, 0, n - 1, r, l);
        }
        else
        {
            l--;
            r--;
            pairs q = query(0, l, r, 0, n - 1);
            cout << q.first << " " << q.second << endl;
        }
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