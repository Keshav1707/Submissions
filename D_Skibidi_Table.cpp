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
const int MOD = 1e9 + 7; // 998244353
template <typename T>
inline void printvector(T &a)
{
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}
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
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
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
    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

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
// vector<int> fact(500005), invfact(500005);
//  void factprecomp()
//  {
//      fact[0] = 1;
//      for (int i = 1; i <= 500005; i++)
//      {
//          fact[i] = fact[i - 1] * i % MOD;
//      }
//      invfact[500005] = binpow(fact[500005], MOD - 2);
//      for (int i = 500005; i > 0; i--)
//      {
//          invfact[i - 1] = invfact[i] * i % MOD;
//      }
//  }
//  long long binomial_coefficient(int n, int k)
//  {
//      return fact[n] * invfact[k] % MOD * invfact[n - k] % MOD;
// }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void solve()
{
    di(n);
    di(q);
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            di(x);
            di(y);
            int xa = 1, ya = 1;
            int xb = 1LL << (n);
            int yb = 1LL << (n);
            int na = 1, nb = 1LL << (2 * n);
            while ((xb - xa) != 1 && (yb - ya) != 1)
            {
                int midx = (xa + xb) / 2;
                int midy = (ya + yb) / 2;
                int xx = (nb - na + 1) / 4;
                if (x <= midx && y <= midy)
                {
                    xb = midx;
                    yb = midy;
                    nb = na + xx - 1;
                }
                else if (x > midx && y > midy)
                {
                    xa = midx + 1;
                    ya = midy + 1;
                    na = na + xx;
                    nb = na + xx - 1;
                }
                else if (x > midx && y <= midy)
                {
                    xa = midx + 1;
                    yb = midy;
                    na = na + 2 * xx;
                    nb = na + xx - 1;
                }
                else
                {
                    xb = midx;
                    ya = midy + 1;
                    na = na + 3 * xx;
                    nb = na + xx - 1;
                }
            }
            int nx = x - xa, ny = y - ya;
            int pos = -1;
            if (nx == 0 && ny == 0)
                pos = 0;
            else if (nx == 1 && ny == 1)
                pos = 1;
            else if (nx == 1 && ny == 0)
                pos = 2;
            else if (nx == 0 && ny == 1)
                pos = 3;
            cout << na + pos << endl;
        }
        else
        {
            di(y);
            int xa = 1, ya = 1;
            int xb = 1LL << (n);
            int yb = 1LL << (n);
            int na = 1, nb = 1LL << (2 * n);
            while ((xb - xa) != 1 && (yb - ya) != 1)
            {
                int midx = (xa + xb) / 2;
                int midy = (ya + yb) / 2;
                int xx = (nb - na + 1) / 4;
                if (y >= na && y <= na + xx - 1)
                {
                    xb = midx;
                    yb = midy;
                    nb = na + xx - 1;
                }
                else if (y >= na + xx && y <= na + 2 * xx - 1)
                {
                    xa = midx + 1;
                    ya = midy + 1;
                    na = na + xx;
                    nb = na + xx - 1;
                }
                else if (y >= na + 2 * xx && y <= na + 3 * xx - 1)
                {
                    xa = midx + 1;
                    yb = midy;
                    na = na + 2 * xx;
                    nb = na + xx - 1;
                }
                else
                {
                    xb = midx;
                    ya = midy + 1;
                    na = na + 3 * xx;
                    nb = na + xx - 1;
                }
            }
            int pos = y - na;
            if (pos == 0)
                cout << xa << " " << ya << endl;
            else if (pos == 1)
                cout << xa + 1 << " " << ya + 1 << endl;
            else if (pos == 2)
                cout << xa + 1 << " " << ya << endl;
            else
                cout << xa << " " << ya + 1 << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}