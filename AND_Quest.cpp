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
unordered_map<string, bool> memo;

string getKey(int index, int current_and)
{
    return to_string(index) + "," + to_string(current_and);
}

bool helper(vector<int> &nums, int k, int index, int current_and)
{

    if (current_and == k)
        return true;

    if (index == nums.size())
        return false;

    string key = getKey(index, current_and);
    if (memo.find(key) != memo.end())
        return memo[key];

    bool include = helper(nums, k, index + 1, current_and & nums[index]);
    bool exclude = helper(nums, k, index + 1, current_and);

    return memo[key] = include || exclude;
}
bool fun(int i, int k, int cur)
{
    int upcoming = i & cur;
    while (upcoming != 0 && k != 0)
    {
        bool a = upcoming & 1, b = k & 1;
        if (a == 0 && b == 1)
            return 0;
        upcoming = upcoming >> 1;
        k = k >> 1;
    }
    return 1;
}
void solve()
{
    di(n);
    di(k);
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    memo.clear();
    bool a = (helper(v, k, 0, LLONG_MAX));
    cout << (a ? "YES" : "NO") << endl;
    if (a)
    {
        int ct = 0;
        int ind = 1;
        int cur = ~0;
        vecll ans;
        for (auto &&i : v)
        {
            if (cur == k)
                break;
            if (fun(i, k, cur))
                ct++, cur = cur & i, ans.pb(ind);
            ind++;
        }
        cout << ct << endl;
        for (auto &&i : ans)
        {
            cout << i << " ";
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