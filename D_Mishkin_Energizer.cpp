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
    stack<char> st;
    deque<char> q;
    map<char, int> m;
    int maxi = 0;
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        q.push_back(c);
        m[c]++;
        maxi = max(maxi, m[c]);
    }

    int l = maxi - m['L'], i = maxi - m['I'], t = maxi - m['T'];
    if ((l + i + t) > (2 * n))
    {
        cout << -1 << endl;
    }
    else
    {
        while ((i + l + t + 3) <= 2 * n)
        {
            i++;
            l++;
            t++;
        }
    }
    vecll ans;

    char x = q.front();
    q.pop_front();
    st.push(x);
    while ((l > 0 || i > 0 || t > 0) && q.size() > 0)
    {
        bool f = 0;
        if (st.top() != q.front())
        {
            if ((st.top() == 'L' && q.front() == 'I' && t > 0) || (st.top() == 'I' && q.front() == 'L' && t > 0))
            {
                q.push_front('T');
                t--;
                ans.push_back(st.size());
                f = 1;
            }
            else if ((st.top() == 'L' && q.front() == 'T' && i > 0) || (st.top() == 'T' && q.front() == 'L' && i > 0))
            {
                q.push_front('I');
                i--;
                ans.push_back(st.size());
                f = 1;
            }
            else if ((st.top() == 'T' && q.front() == 'I' && l > 0) || (st.top() == 'I' && q.front() == 'T' && l > 0))
            {
                q.push_front('L');
                l--;
                ans.push_back(st.size());
                f = 1;
            }
        }
        if (st.top() == q.front() || f == 0)
        {
            st.push(q.front());
            q.pop_front();
        }
    }

    if (q.empty() && (l + i + t) > 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << ans.size() << endl;
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

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