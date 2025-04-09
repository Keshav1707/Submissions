#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define pb push_back

#define ff first
#define ss second
#define ll long long
#define lb lower_bound
#define ub upper_bound

#define size(x) (ll)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)

#define rep(i, a, b) for (ll i = (a); i < (b); i++)
#define rep1(i, a, b) for (ll i = (a); i <= (b); i++)
#define bck(i, a, b) for (ll i = (a) - 1; i >= (b); i--)

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

typedef map<ll, ll> mpll;

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

/* ---------------------------- UNIVERSAL CONSTANTS ---------------------------- */

const long double eps = 1e-9;
const ll mod = 1e9 + 7; // 998244353LL;
const int64_t inf = 1LL << 60;
const double pi = 3.14159265358979323846264338327950;

/*................... Some important functions ........ */

bool ispow2(ll x) { return (x ? !(x & (x - 1)) : 0); }

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * 1LL * a) % mod;
        }
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return res;
}

ll ncr(ll n, ll r)
{
    ll fact[n + 1];
    ll inv[n + 1];
    fact[0] = 1;
    inv[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
    }
    for (ll i = 1; i <= n; i++)
    {
        inv[i] = binpow(fact[i], mod - 2);
    }

    if (r > n)
        return 0;
    return ((fact[n] * inv[r]) % mod * inv[n - r]) % mod;
}

ll calc_hash(string const &s)
{
    const ll p = 31;
    const ll m = 1e9 + 9;
    ll hash_value = 0;
    ll p_pow = 1;
    for (char c : s)
    {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

// CODE HERE

ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, 1, 0, -1};

ll Dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
ll Dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

bool travel(ll node, ll parent, ll target, vector<vector<ll>> &adj, vector<ll> &viscnt)
{
    if (node == target)
    {
        viscnt[node]++;
        return true;
    }

    bool found = false;

    for (auto nbr : adj[node])
    {
        if (nbr != parent)
        {
            found |= travel(nbr, node, target, adj, viscnt);
        }

        if (found == true)
            break;
    }

    if (found == true)
    {
        viscnt[node]++;
    }

    return found;
}

ll minPrice(ll node, ll parent, bool canHalf, vector<vector<ll>> &adj, vector<ll> &cost, vector<vector<ll>> &dp)
{
    // pruning

    // base case

    // cache check
    if (dp[node][canHalf] != -1)
    {
        return dp[node][canHalf];
    }
    // compute
    ll mn = 1e17;
    ll noHalfCurrentNodePrice = cost[node];

    for (auto nbr : adj[node])
    {
        if (nbr != parent)
        {
            noHalfCurrentNodePrice += minPrice(nbr, node, 1, adj, cost, dp);
            noHalfCurrentNodePrice %= mod;
        }
    }

    ll halfCurrentNodePrice = 1e17;

    if (canHalf)
    {
        halfCurrentNodePrice = cost[node] / 2;

        for (auto nbr : adj[node])
        {
            if (nbr != parent)
            {
                halfCurrentNodePrice += minPrice(nbr, node, 0, adj, cost, dp);
                halfCurrentNodePrice %= mod;
            }
        }
    }

    // save and return

    return dp[node][canHalf] = min(noHalfCurrentNodePrice, halfCurrentNodePrice) % mod;
}

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> edges(n - 1, vector<ll>(2));

    for (ll i = 0; i < n - 1; i++)
    {
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<ll> fuel(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> fuel[i];
    }

    ll k;
    cin >> k;

    vector<vector<ll>> timetravels(k, vector<ll>(2));

    for (ll i = 0; i < k; i++)
    {
        cin >> timetravels[i][0] >> timetravels[i][1];
    }

    vector<vector<ll>> adj(n);

    for (auto e : edges)
    {
        ll u = e[0];
        ll v = e[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> viscnt(n, 0);

    for (auto trip : timetravels)
    {
        travel(trip[0], -1, trip[1], adj, viscnt);
    }

    vector<ll> cost(n);

    for (ll i = 0; i < n; i++)
    {
        cost[i] = viscnt[i] * fuel[i];
        cost[i] %= mod;
    }

    vector<vector<ll>> dp(n, vector<ll>(2, -1));

    ll ans = minPrice(timetravels[0][0], -1, 1, adj, cost, dp) % mod;

    cout << ans << "\n";
}

int main()
{
    ios ::sync_with_stdio(false);
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
