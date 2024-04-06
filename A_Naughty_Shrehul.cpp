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
    di(a);
    di(h);
    vecll v, va;
    unordered_map<int, int> m, ma;
    for (ll i = 1; i <= a; i++)
    {
        /* code */
        di(x);
        m[x ^ i]++;
    }
    for (ll i = 1; i <= a; i++)
    {
        /* code */
        di(x);
        ma[x ^ i ^ h]++;
    }
    int sum = 0;
    for (auto &&i : m)
    {
        sum += i.second * ma[i.first];
        // cout << i.first << " " << i.second << endl;
    }
    cout << sum << endl;
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