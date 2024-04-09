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
    di(x);
    vecll v;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    sort(all(v));
    vector<pair<int, pair<int, int>>> va;
    for (ll i = 0; i < x; i++)
    {
        for (ll j = i + 1; j < x; j++)
        {

            if (i == j)
                continue;
            pair<int, int> temp = {i, j};

            va.pb({v[i] + v[j] + (v[i] ^ v[j]), temp});
        }
    }
    sort(rall(va));
    unordered_map<int, int> m;
    int ans = 0;
    int d = max((*va.begin()).second.first, (*va.begin()).second.second);
    m[d]++;
    for (auto &&i : va)
    {
        if ((m[i.second.first] == 0) ^ (m[i.second.second] == 0))
        {
            // cout << i.second.first << " " << i.second.second << " " << i.first << endl;
            m[i.second.first]++;
            m[i.second.second]++;
            ans += i.first;
        }
    }
    cout << ans << endl;
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