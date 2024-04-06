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
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second < b.second;
}
void solve()
{
    di(n);
    di(q);
    map<int, int> m;
    set<pair<ll, ll>> v;
    ll maxi = 0, maxele = 0;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        while ((x & 1) == 0)
            x = x >> 1;
        m[x]++;
        if (maxi < m[x])
        {
            maxele = x;
        }
        maxi = max(maxi, m[x]);
    }
    // for (auto &&i : m)
    // {
    //     v.insert({i.second, i.first});
    // }
    sort(m.begin(), m.end(), cmp);
    for (auto &&i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // while (q--)
    // {
    //     di(x);
    //     di(y);
    //     while ((y & 1) == 0)
    //         y = y >> 1;
    //     // if (x == 1)
    //     // {
    //     //     if (y == maxele)
    //     // }
    //     if (x == 2)
    //     {
    //         if (y == maxele)
    //             maxi++;
    //         else
    //             m[y]++;
    //         if (m[y] > maxi)
    //         {
    //             maxi = m[y];
    //             maxele = y;
    //         }
    //         cout << maxi << endl;
    //     }
    // }
}
signed main()
{
    ios_base::sync_with_stdio(false);
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