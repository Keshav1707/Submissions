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
    vecll v;
    map<int, int> m;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        m[x]++;
    }
    if ((*(m.begin())).second == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int fs = (*(m.begin())).first;
    for (auto &&i : m)
    {
        if (i.first != fs && i.first % fs != 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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