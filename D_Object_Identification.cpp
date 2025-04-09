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

        return hash1;
    }
};

void solve()
{
    di(n);
    vecll v(n);
    int temp = 1;
    int one, last;
    for (auto &&i : v)
    {
        cin >> i;
        if (i == 1)
            one = temp;
        if (i == n)
            last = temp;
        temp++;
    }

    map<int, int> m;
    for (ll i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[i + 1] == 0)
        {
            cout << "? " << i + 1 << " " << ((i == n - 1) ? 1 : n) << endl;
            cout.flush();

            di(x);
            if (x == 0)
            {
                cout << "! A" << endl;
                cout.flush();
                return;
            }
            else
            {
                cout << "! B" << endl;
                cout.flush();
                return;
            }
        }
    }

    cout << "? " << one << " " << last << endl;
    cout.flush();
    di(x);
    if (x < n - 1)
    {
        cout << "! A" << endl;
        cout.flush();
        return;
    }
    else if (x > n - 1)
    {
        cout << "! B" << endl;
        cout.flush();
        return;
    }
    cout << "? " << last << " " << one << endl;
    cout.flush();
    di(y);

    if (x == y)
    {
        cout << "! B" << endl;
        cout.flush();
        return;
    }
    cout << "! A" << endl;
    cout.flush();
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
