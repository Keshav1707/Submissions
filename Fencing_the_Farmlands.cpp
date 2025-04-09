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

void solve()
{
    di(R);

    di(C);
    di(N);
    unordered_set<int> c;
    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        int hash = (int)x * (C + 1) + y;
        c.insert(hash);
    }

    unordered_set<int> vis;
    int maxi = 0;

    for (auto cell : c)
    {
        if (vis.count(cell))
            continue;

        queue<int> q;
        q.push(cell);
        vis.insert(cell);
        int pm = 0;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            int x = curr / (C + 1);
            int y = curr % (C + 1);

            int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for (int d = 0; d < 4; ++d)
            {
                int dx = directions[d][0];
                int dy = directions[d][1];
                int nx = x + dx;
                int ny = y + dy;

                if (nx < 1 || nx > R || ny < 1 || ny > C)
                {
                    pm++;
                    continue;
                }

                int neighbor = (int)nx * (C + 1) + ny;
                if (!c.count(neighbor))
                {
                    pm++;
                }
                else
                {
                    if (!vis.count(neighbor))
                    {
                        vis.insert(neighbor);
                        q.push(neighbor);
                    }
                }
            }
        }

        if (pm > maxi)
        {
            maxi = pm;
        }
    }

    cout << maxi << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}