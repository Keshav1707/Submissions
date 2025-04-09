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
struct cmp
{
    bool operator()(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
    {
        if (a.first != b.first)
            return a.first > b.first; // Sort by first element (smallest first)
        if (a.second.first != b.second.first)
            return a.second.first > b.second.first; // Then by second.first (smallest first)
        return a.second.second > b.second.second;   // Lastly by second.second (smallest first)
    }
};
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, cmp> pq;
vector<pair<pair<int, int>, pair<int, int>>> seats;
void newcoord(int x, int y)
{

    int c = (3 * x + 1);
    int d = (3 * y + 2);
    int e = (3 * x + 2);
    int f = (3 * y + 1);
    int g = (3 * x + 2);
    int h = (3 * y + 2);
    pq.push({c + d, {c, d}});
    pq.push({e + f, {e, f}});
    pq.push({g + h + 2, {g, h}});
}
void solve()
{

    pq = priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, cmp>();
    di(n);
    vecll v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    int ct = 0;
    int curr = 0;
    vector<pairs> ans;
    for (auto &&i : v)
    {
        if (i == 0)
        {
            pairs p = seats[ct].first;
            newcoord(p.first, p.second);
            ans.pb({3 * p.first + 1, 3 * p.second + 1});
            ct++;
        }
        else if (i == 1)
        {
            if (pq.empty())
            {
                pairs p = seats[ct].first;
                newcoord(p.first, p.second);
                ans.pb({3 * p.first + 1, 3 * p.second + 1});
                ct++;
            }
            else
            {
                ans.pb(pq.top().second);

                pq.pop();
            }
        }
    }
    for (auto &&i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    int maxX = 224, maxY = 224;

    for (int x = 0; x < maxX; x++)
    {
        for (int y = 0; y < maxY; y++)
        {
            int seatX = 3 * x + 1, seatY = 3 * y + 1;
            seats.push_back({{x, y}, {seatX, seatY}});
        }
    }
    sort(seats.begin(), seats.end(), [](const auto &a, const auto &b)
         {
             int sumA = a.second.first + a.second.second;
             int sumB = b.second.first + b.second.second;
             if (sumA != sumB)
                 return sumA < sumB; 
             if (a.second.first != b.second.first)
                 return a.second.first < b.second.first; 
             return a.second.second < b.second.second; });
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}