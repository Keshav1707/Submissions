#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
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
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indx_set;
struct node
{
    int left, right;
    indx_set *st;
    node(int l, int r) : left(l), right(r), st(new indx_set()) {}
    ~node() { delete st; }
};

class st
{
private:
    vector<node *> nodes;
    vector<ll> &arr;
    int n;

    void build(int idx, int l, int r)
    {
        nodes[idx] = new node(l, r);
        if (l == r)
        {
            nodes[idx]->st->insert(arr[l]);
            return;
        }
        int mid = (l + r) / 2;
        build(2 * idx + 1, l, mid);
        build(2 * idx + 2, mid + 1, r);
        for (int i = l; i <= r; i++)
        {
            nodes[idx]->st->insert(arr[i]);
        }
    }

    int lft(int idx, int l, int r, int ql, int qr, ll v)
    {
        if (qr < l || ql > r)
            return 0;
        if (ql <= l && r <= qr)
        {
            return nodes[idx]->st->order_of_key(v);
        }
        int mid = (l + r) / 2;
        return lft(2 * idx + 1, l, mid, ql, qr, v) +
               lft(2 * idx + 2, mid + 1, r, ql, qr, v);
    }

    int rgt(int idx, int l, int r, int ql, int qr, ll v)
    {
        if (qr < l || ql > r)
            return 0;
        if (ql <= l && r <= qr)
        {
            return nodes[idx]->st->order_of_key(v + 1);
        }
        int mid = (l + r) / 2;
        return rgt(2 * idx + 1, l, mid, ql, qr, v) +
               rgt(2 * idx + 2, mid + 1, r, ql, qr, v);
    }

    void update(int idx, int l, int r, int pos, ll old_val, ll new_val)
    {
        if (pos < l || pos > r)
            return;
        nodes[idx]->st->erase(nodes[idx]->st->find(old_val));
        nodes[idx]->st->insert(new_val);
        if (l == r)
            return;
        int mid = (l + r) / 2;
        if (pos <= mid)
            update(2 * idx + 1, l, mid, pos, old_val, new_val);
        else
            update(2 * idx + 2, mid + 1, r, pos, old_val, new_val);
    }

public:
    st(int n, vector<ll> &a) : arr(a), n(n), nodes(4 * n, nullptr)
    {
        build(0, 0, n - 1);
    }

    ~st()
    {
        for (auto node : nodes)
            if (node)
                delete node;
    }

    int count_left(int ql, int qr, ll v)
    {
        if (ql > qr)
            return 0;
        return lft(0, 0, n - 1, ql, qr, v);
    }

    int count_right(int ql, int qr, ll v)
    {
        if (ql > qr)
            return 0;
        return rgt(0, 0, n - 1, ql, qr, v);
    }

    void update(int pos, ll old_val, ll new_val)
    {
        update(0, 0, n - 1, pos, old_val, new_val);
    }
};
ll count_triplets(int l, int r, int k, const vector<ll> &arr, st &seg)
{
    if (r - l < 2)
        return 0;
    ll ans = 0;
    for (int b = l + 1; b <= r - 1; b++)
    {
        int left_count = seg.count_left(l, b - 1, arr[b]);
        int right_count = seg.count_right(b + 1, r, arr[b] - k);
        ans += (ll)left_count * right_count;
    }
    return ans;
}

void solve()
{
    di(n);
    di(q);
    di(k);
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    st seg(n, arr);

    while (q--)
    {
        di(type);
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << count_triplets(l, r, k, arr, seg) << "\n";
        }
        else
        {
            int idx;
            ll val;
            cin >> idx >> val;
            idx--;
            ll old_val = arr[idx];
            arr[idx] = val;
            seg.update(idx, old_val, val);
        }
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