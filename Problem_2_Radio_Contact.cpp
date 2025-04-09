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
long long dist(pair<int, int> a, pair<int, int> b)
{
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}
void solve()
{
    // dp[i][j]=minimum energy after ith ang jth move;
    di(n);
    di(m);
    pairs a, b;
    cin >> a.first >> a.second >> b.first >> b.second;
    string ma, mb;
    cin >> ma >> mb;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    dp[0][0] = 0;
    pairs aa = a, bb = b;
    for (ll i = 0; i < n; i++)
    {
        if (ma[i] == 'N')
            a.first--;
        if (ma[i] == 'E')
            a.second++;
        if (ma[i] == 'W')
            a.second--;
        if (ma[i] == 'S')
            a.first++;
        dp[i + 1][0] = dist(a, b);
    }
    a = aa;
    for (ll i = 0; i < m; i++)
    {
        if (mb[i] == 'N')
            b.first--;
        if (mb[i] == 'E')
            b.second++;
        if (mb[i] == 'W')
            b.second--;
        if (mb[i] == 'S')
            b.first++;
        dp[0][i + 1] = dist(a, b);
    }
    a = aa;
    b = bb;

    for (ll i = 0; i <= n; i++)
    {
        if (i != 0)
        {
            if (ma[i - 1] == 'N')
                a.first--;
            if (ma[i - 1] == 'E')
                a.second++;
            if (ma[i - 1] == 'W')
                a.second--;
            if (ma[i - 1] == 'S')
                a.first++;
        }

        for (ll j = 0; j <= m; j++)
        {

            if (j != 0)
            {
                if (mb[j - 1] == 'N')
                    b.first--;
                if (mb[j - 1] == 'E')
                    b.second++;
                if (mb[j - 1] == 'W')
                    b.second--;
                if (mb[j - 1] == 'S')
                    b.first++;
            }

            if (i > 0 && j > 0)
                dp[i][j] += min(dp[i][j - 1] + dist(a, b), dp[i - 1][j] + dist(a, b));

            cout << a.first << " " << a.second << " " << b.first << " " << b.second << "\n";
        }
        cout << endl;
    }
    cout << dp[n][m] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}