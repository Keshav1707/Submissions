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

    di(x);
    vector<vector<vector<int>>> v(x, vector<vector<int>>(x, vector<int>(x)));
    vector<vector<vector<int>>> prefixSum(x + 1, vector<vector<int>>(x + 1, vector<int>(x + 1, 0)));

    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < x; j++)
        {
            for (ll k = 0; k < x; k++)
            {
                cin >> v[i][j][k];
                prefixSum[i + 1][j + 1][k + 1] = v[i][j][k] + prefixSum[i][j + 1][k + 1] + prefixSum[i + 1][j][k + 1] + prefixSum[i + 1][j + 1][k] - prefixSum[i][j][k + 1] - prefixSum[i][j + 1][k] - prefixSum[i + 1][j][k] + prefixSum[i][j][k];
            }
        }
    }
    di(q);
    while (q--)
    {
        di(la);
        di(ra);
        di(lb);
        di(rb);
        di(lc);
        di(rc);
        la--;

        lb--;

        lc--;

        int sum = prefixSum[ra][rb][rc] - prefixSum[la][rb][rc] - prefixSum[ra][lb][rc] - prefixSum[ra][rb][lc] + prefixSum[la][lb][rc] + prefixSum[la][rb][lc] + prefixSum[ra][lb][lc] - prefixSum[la][lb][lc];

        cout << sum << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
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