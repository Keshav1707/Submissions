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
    vector<ll> v;
    set<int> s;
    for (size_t i = 0; i < n; i++)
    {
        di(x);
        s.insert(x);
    }
    for (auto &&i : s)
    {
        v.push_back(i);
    }
    int len = v.size();
    int res = 1;
    for (size_t i = 0; i < len; i++)
    {
        int temp = v[i] + n - 1;
        int it = upper_bound(v.begin(), v.end(), temp) - v.begin() - i;
        // cout << temp << "_" << it << " ";
        res = max(res, it);
    }
    // bye;
    cout << res << endl;
    // bye;
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