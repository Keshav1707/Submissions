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
const int MOD = 998244353;
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
template <ll mod = MOD>
struct modint
{
    ll val;
    modint() : val(0) {}
    modint(ll a) : val(a)
    {
        val += mod;
        if (val >= mod)
            val -= mod;
    }
    void operator=(modint a) { val = a.val; }
    bool operator==(modint a) { return val == a.val; }
    bool operator!=(modint a) { return val != a.val; }
    inline modint &operator+=(modint a)
    {
        val = val + a.val;
        if (val >= mod)
            val -= mod;
        return *this;
    }
    inline modint &operator-=(modint a)
    {
        val = val - a.val + mod;
        if (val >= mod)
            val -= mod;
        return *this;
    }
    inline modint &operator*=(modint a)
    {
        val = (val * a.val) % mod;
        return *this;
    }
    friend modint operator+(modint a, modint b) { return (a += b); }
    friend modint operator-(modint a, modint b) { return (a -= b); }
    friend modint operator*(modint a, modint b) { return (a *= b); }
    friend modint operator^(modint a, ll b)
    {
        modint res = 1;
        for (; b; b >>= 1)
        {
            if (b & 1)
                res *= a;
            a *= a;
        }
        return res;
    }
    friend modint operator/(modint num, modint den)
    {
        den = den ^ (mod - 2);
        return (num * den);
    }
    friend ostream &operator<<(ostream &out, modint a)
    {
        out << a.val;
        return out;
    }
    friend istream &operator>>(istream &in, modint &a)
    {
        in >> a.val;
        return in;
    }
};

using mint = modint<MOD>;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int> fact(500005), invfact(500005);
void factprecomp()
{
    fact[0] = 1;
    for (int i = 1; i <= 500005; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invfact[500005] = binpow(fact[500005], MOD - 2);
    for (int i = 500005; i > 0; i--)
    {
        invfact[i - 1] = invfact[i] * i % MOD;
    }
}
long long binomial_coefficient(int n, int k)
{
    return fact[n] * invfact[k] % MOD * invfact[n - k] % MOD;
}
void solve()
{
    di(n);

    mint ans = 1;

    for (ll i = 0; i < n / 3; i++)
    {
        vecll v(3);
        for (ll j = 0; j < 3; j++)
        {
            di(x);
            v[j] = (x);
        }
        sort(all(v));
        if (v[0] == v[2])
            ans *= 3;
        else if (v[0] == v[1])
            ans *= 2;
    }
    int x = binomial_coefficient(n / 3, n / 6);
    cout << (ans * x) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);
    factprecomp();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}