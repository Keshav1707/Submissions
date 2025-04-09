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
    set<pairs> v;
    map<int, int> mp;
    for (size_t i = 0; i < x; i++)
    {
        di(n);
        di(m);
        v.insert({n, m});
        mp[n]++;
    }
    int cnt = 0;
    for (auto &&i : mp)
    {
        if (i.second == 2)
        {
            cnt += x - 2;
        }
    }
    for (auto &&i : v)
    {
        if (v.find({i.first + 2, i.second}) != v.end() && v.find({i.first + 1, !i.second}) != v.end())
            cnt++;
    }
    cout << cnt << endl;
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