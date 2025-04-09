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
vecll v(2e5, 0);
void presum()
{
    for (ll i = 1; i < 2e5 + 1; i++)
    {
        /* code */
        int x = i;
        while (x > 0)
        {
            v[i] += x % 10;
            x = x / 10;
        }
        v[i] += v[i - 1];
    }
}
void solve()
{
    di(x);
    cout << v[x] << endl;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    presum();
    while (t--)
    {
        solve();
    }
    return 0;
}