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
bool solver(vecll &v, int mid, int m)
{
    int a = 0;
    for (auto i : v)
    {
        a += min(i, mid);
        if (a > m)
            return 0;
    }
    return 1;
}
void solve()
{
    di(n);
    di(m);
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int beg = 1, end = m;
    int mid;
    int ans = m;
    while (beg <= end)
    {
        mid = (beg + end) >> 1;
        if (solver(v, mid, m))
        {
            beg = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    if (ans >= m)
    {
        cout << "infinite" << endl;
        return;
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