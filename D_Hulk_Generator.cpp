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

vector<int> findLISWithDiff2(const vector<int> &arr)
{
    int n = arr.size();

    if (n == 0)
        return {};

    vector<int> longestSubsequence;
    vector<int> currentSubsequence;

    currentSubsequence.push_back(arr[0]);

    for (int i = 1; i < n; ++i)
    {

        if (arr[i] - currentSubsequence.back() == 2 || arr[i] - currentSubsequence.back() == 0)
        {
            currentSubsequence.push_back(arr[i]);
        }
        else
        {

            if (currentSubsequence.size() > longestSubsequence.size())
            {
                longestSubsequence = currentSubsequence;
            }

            currentSubsequence.clear();
            currentSubsequence.push_back(arr[i]);
        }
    }

    if (currentSubsequence.size() > longestSubsequence.size())
    {
        longestSubsequence = currentSubsequence;
    }

    return longestSubsequence;
}
void solve()
{
    di(n);
    di(d);
    vecll v;
    int mini = 1e9;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        mini = min(mini, x);
        v.pb(x);
    }
    mini = *min_element(all(v));
    if (d >= 3)
    {
        cout << mini << endl;
        return;
    }
    if (d == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] == 1)
            {
                cout << v[i - 1] << " " << v[i] << "\n";
                return;
            }
        }
        cout << mini << endl;
    }
    else
    {
        map<int, int> m;
        int ind = 0;
        for (auto &&i : v)
        {
            m[i] = ind;
            ind++;
        }
        int k = 2;
        while (k < 1e18)
        {
            for (auto &&i : m)
            {
                if (m.find(i.first + k) != m.end() && m.find(i.first - k) != m.end())
                {
                    vecll ans = {i.second, m[i.first + k], m[i.first - k]};
                    sort(all(ans));
                    for (auto &&i : ans)
                    {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                    return;
                }
            }
            k = k << 1;
        }

        k = 2;
        while (k < 1e18)
        {
            for (auto &&i : m)
            {

                if (m.find((i.first + k)) != m.end())
                {
                    vecll ans = {i.second, m[(i.first + k)]};
                    sort(all(ans));
                    for (auto &&i : ans)
                    {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                    return;
                }
            }
            k = k << 1;
        }
        cout << mini << endl;
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