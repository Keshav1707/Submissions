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
vector<int> mexTillEveryIndex(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> mexTill(n);
    vector<int> freq(n + 1, 0);                             // To track occurrences
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap to track MEX

    // Initially, MEX is 0, so add all numbers starting from 0
    for (int i = 0; i <= n; i++)
    {
        minHeap.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; // Update frequency

        // If this number was the MEX, we need to update
        while (!minHeap.empty() && freq[minHeap.top()] > 0)
        {
            minHeap.pop();
        }

        mexTill[i] = minHeap.top(); // Current MEX
    }

    return mexTill;
}

void solve()
{
    int n;
    cin >> n;
    vecll va(n);
    mexTillEveryIndex(va);
    for (auto &&i : va)
    {
        cin >> i;
    }
    vector<pairs> pa;
    vecll v = va;
    mexTillEveryIndex(v);
    while (true)
    {
        vecll temp;
        int zeroes = 0;

        for (ll i = 0; i < v.size(); ++i)
        {
            if (v[i] > 0)
                temp.pb(v[i]);
            else
            {
                if (i < v.size() - 1)
                {
                    i++;
                    zeroes++;
                    pa.pb({i + 1 - zeroes, i + 2 - zeroes});
                }
                else
                {
                    pa.pb({i - zeroes, i + 1 - zeroes});
                    if (!temp.empty())
                        temp.pop_back();
                    zeroes++;
                }
                temp.pb(69);
            }
        }
        v = temp;
        int ct = 0;
        for (auto &&i : v)
        {
            if (i == 0)
                ct++;
        }
        if (ct == 0)
            break;
    }
    cout << pa.size() + 1 << endl;
    pa.pb({1, v.size()});
    for (auto &&i : pa)
    {
        cout << i.first << " " << i.second << endl;
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