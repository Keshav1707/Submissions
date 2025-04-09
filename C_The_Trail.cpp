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

void solve()
{
    vector<vecll> v;
    di(n);
    di(m);
    string s;
    cin >> s;
    int ind = 0;
    pairs p = {0, 0};
    vecll csum, rsum;
    for (ll i = 0; i < n; i++)
    {
        vecll temp;
        int sum = 0;
        for (ll j = 0; j < m; j++)
        {
            di(x);
            temp.pb(x);
            sum += x;
        }
        rsum.pb(sum);
        v.pb(temp);
    }
    for (ll i = 0; i < m; i++)
    {
        vecll temp;
        int sum = 0;
        for (ll j = 0; j < n; j++)
        {

            sum += v[j][i];
        }
        csum.pb(sum);
    }

    for (auto &&i : s)
    {
        if (v[p.first][p.second] == 0)
        {
            if (i == 'D')
            {
                v[p.first][p.second] = -1LL * rsum[p.first];
                rsum[p.first] = 0;
                csum[p.second] += v[p.first][p.second];
            }
            else
            {
                v[p.first][p.second] = -1LL * csum[p.second];
                csum[p.second] = 0;
                rsum[p.first] += v[p.first][p.second];
            }
        }
        if (i == 'D')
            p.first++;
        else
            p.second++;
    }
    int r = n - 1;
    int c = m - 1;
    if (v[r][c] == 0)
    {
        if (rsum[r] != 0)
        {
            v[r][c] = -1LL * (rsum[r]);
            rsum[r] = 0;
            csum[c] += v[r][c];
        }
        else
        {
            v[r][c] = -1LL * (csum[c]);
            csum[c] = 0;
            rsum[r] += v[r][c];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
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