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
    vecll v;
    di(n);
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int beg = 0;
    int end = n - 1;
    while (v[beg] == v[0])
    {
        beg++;
    }
    while (v[n - 1] == v[end])
    {
        end--;
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int x = n - beg, y = end + 1;
    int a = end - beg + 1, b = 0;
    if (v[0] == v[n - 1])
    {
        cout << max(0LL, end - beg + 1) << endl;
    }
    else
    {
        cout << min(n - beg, end + 1) << endl;
    }
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