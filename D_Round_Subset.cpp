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
    di(n);
    di(k);
    vecll v(n);
    vecll tw(n), fiv(n);
    int ind = 0;
    int fv = 0;
    for (auto &&i : v)
    {
        cin >> i;
        int x = i;

        while (x % 5 == 0)
        {
            fiv[ind]++;
            fv++;
            x /= 5;
        }
        while (x % 2 == 0)
        {
            tw[ind]++;
            x /= 2;
        }
        ind++;
    }
    vector<vector<int>> prev(k + 5, vector<int>(fv + 5, -1)), curr(k + 5, vector<int>(fv + 5, -1));

    prev[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int fives = 0; fives <= fv; fives++)
            {

                if (fives - fiv[i - 1] >= 0 && j > 0 && prev[j - 1][fives - fiv[i - 1]] != -1)
                    curr[j][fives] = max(curr[j][fives], prev[j - 1][fives - fiv[i - 1]] + tw[i - 1]);
                if (prev[j][fives] != -1)
                    curr[j][fives] = max(curr[j][fives], prev[j][fives]);
            }
        }
        prev = curr;
    }
    int ans = 0;
    for (int i = 0; i <= fv; i++)
    {
        // cout << dp[n][k][i] << endl;
        ans = max(ans, min(i, prev[k][i]));
    }
    cout << ans;
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