#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    di(m);
    di(k);

    unordered_map<int, int> ma, v, va;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        if (x <= k)
        {
            v[x]++;
            ma[x]++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        di(x);
        if (x <= k)
        {
            va[x]++;
            ma[x]++;
        }
    }
    if (v.size() < k / 2 || va.size() < k / 2)
    {
        cout << "NO" << endl;
        return;
    }
    else if (ma.size() < k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}