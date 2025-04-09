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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
bool check(vector<pair<int, int>> v, int mid)
{
    int l = 0, r = 0;
    for (auto &&i : v)
    {
        l = max(l - mid, i.first);
        r = min(r + mid, i.second);
        if (l > r)
            return false;
    }
    return true;
}
void solve()
{
    di(n);
    vector<pair<int, int>> v(n);
    for (auto &&i : v)
    {
        cin >> i.first;
        cin >> i.second;
    }

    int b = 0, e = LLONG_MAX, mid;
    int ans = LLONG_MAX;
    while (b <= e)
    {
        mid = (b + e) >> 1;
        if (check(v, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            b = mid + 1;
        }
    }
    cout << ans << endl;
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