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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    vector<vector<int>> v;
    for (size_t i = 0; i < n; i++)
    {
        vecll a;
        for (ll j = 0; j < n; j++)
        {
            di(x);
            a.pb(x);
        }
        v.pb(a);
    }
    vector<int> va;
    for (ll i = 0; i < n; i++)
    {
        ll s = LLONG_MAX;
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            s = s & v[i][j];
        }
        va.pb(s % INT_MAX);
    }
    vector<vector<int>> ans;
    for (size_t i = 0; i < n; i++)
    {
        vecll a;
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
                a.pb(0);
            else
                a.pb(va[i] | va[j]);
        }
        ans.pb(a);
    }
    if (ans == v)
    {
        cout << "YES" << endl;
        for (auto &&i : va)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main()
{
    di(t);

    while (t--)
    {
        solve();
    }
    return 0;
}