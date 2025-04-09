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
    vector<vector<char>> v(n, vector<char>(m));
    bool f = 0;
    for (ll i = 0; i < n; i++)
    {
        int ct = 0;
        for (ll j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
            if (c != '.')
                ct++;
        }
        if (ct & 1)
            f = 1;
    }
    for (ll i = 0; i < m; i++)
    {
        int ct = 0;
        for (ll j = 0; j < n; j++)
        {
            char c;
            c = v[j][i];
            if (c != '.')
                ct++;
        }
        if (ct & 1)
            f = 1;
    }
    if (f)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> bs(m);
    vector<int> ws(m);
    for (ll i = 0; i < n; i++)
    {
        bool ff = 0;
        for (ll j = 0; j < m; j++)
        {

            if (v[i][j] == 'U')
            {
                if (ff)
                {
                    v[i][j] = 'B';
                    v[i + 1][j] = 'W';
                    ff = !ff;
                }
                else
                {
                    v[i][j] = 'W';
                    v[i + 1][j] = 'B';
                    ff = !ff;
                }
            }
        }
    }
    for (ll j = 0; j < m; j++)
    {
        bool ff = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i][j] == 'L')
            {
                if (ff)
                {
                    v[i][j] = 'B';
                    v[i][j + 1] = 'W';
                    ff = !ff;
                }
                else
                {
                    v[i][j] = 'W';
                    v[i][j + 1] = 'B';
                    ff = !ff;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}