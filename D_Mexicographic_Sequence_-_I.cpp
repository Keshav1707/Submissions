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
    vecll v(2e5, 0);
    vector<pair<int, int>> va;
    di(x);
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v[n]++;
    }
    int a = 0;
    int mini = INT_MAX;
    while (v[a] != 0)
    {
        va.push_back({v[a], a});
        mini = min(mini, v[a]);
        a++;
    }
    if (a == 0)
        mini = 0;
    for (ll i = 0; i < mini; i++)
    {
        cout << a << " ";
    }

    cout << mini << " " << a << endl;
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