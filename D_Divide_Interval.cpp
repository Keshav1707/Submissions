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
    di(l);
    di(r);
    vector<pairs> v;
    if (l == 0)
    {
        int y = r, c = 0;
        while (y > 0)
        {
            c++;
            y = y >> 1;
        }
        v.pb({l, l + (1LL << c - 1)});
        l += l + (1LL << c - 1);
    }

    while (l < r)
    {
        long long x = l;
        long long c = 0;
        while ((x & 1) == 0)
        {
            c++;
            x = x >> 1;
        }
        while (l + (1LL << c) > r)
        {
            c--;
        }
        v.pb({l, l + (1LL << c)});
        l = l + (1LL << c);
    }
    cout << v.size() << endl;
    for (auto &&i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}