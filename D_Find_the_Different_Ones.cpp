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
    vecll v, va, vb;
    unordered_map<int, int> m, ma;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    va.pb(1);
    int x = 1, y = 1;
    vb.pb(1);
    for (ll i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            va.pb(x);
            vb.pb(y);
        }
        else
        {
            y = i + 1;
            va.pb(++x);
            vb.pb(y);
        }
    }
    // for (auto &&i : va)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;
    di(q);
    while (q--)
    {
        di(l);
        di(r);
        if (va[r - 1] - va[l - 1] == 0)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            auto it = upper_bound(all(v), v[l - 1]);

            cout << l << " " << *it << endl;
        }
    }
    cout << endl;
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