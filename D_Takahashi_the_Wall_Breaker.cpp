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
void solve()
{
    di(n);
    di(m);
    vector<vector<char>> v(n, vector<char>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
        }
    }
    vector<vector<int>> dis(n, vector<int>(m, 1e9));
    di(xa);
    di(ya);
    di(xb);
    di(yb);
    xa--;
    xb--;
    ya--;
    yb--;
    dis[xa][ya] = 0;
    priority_queue<pair<int, pairs>, vector<pair<int, pairs>>, greater<pair<int, pairs>>> q;
    q.push({0, {xa, ya}});
    int direc[5] = {-1, 0, 1, 0, -1};
    while (!q.empty())
    {
        int r = q.top().second.first;
        int c = q.top().second.second;
        int dist = q.top().first;
        if (dis[r][c] < dist)
        {
            q.pop();
            continue;
        }
        if (r == xb && c == yb)
        {
            cout << dist << endl;
            return;
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nr = r + direc[i];
            int nc = c + direc[i + 1];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m)
            {
                if (v[nr][nc] == '.' && dis[nr][nc] > dist)
                {
                    dis[nr][nc] = dist;
                    q.push({dist, {nr, nc}});
                }
                else if (v[nr][nc] == '#' && dis[nr][nc] > dist + 1)
                {
                    // cout << nr << " " << nc << " 0" << endl;
                    dis[nr][nc] = dist + 1;
                    q.push({dist + 1, {nr, nc}});
                }
                int nnr = nr + direc[i];
                int nnc = nc + direc[i + 1];
                if (nnr >= 0 && nnr < n && nnc >= 0 && nnc < m && dis[nnr][nnc] > dist + 1)
                {
                    // cout << nnr << " " << nnc << " 1" << endl;
                    dis[nnr][nnc] = min(dist + 1, dis[nnr][nnc]);
                    q.push({dist + 1, {nnr, nnc}});
                }
            }
        }
    }
    // for (auto &&i : dis)
    // {
    //     printvector(i);
    // }

    cout << dis[xb][yb] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

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