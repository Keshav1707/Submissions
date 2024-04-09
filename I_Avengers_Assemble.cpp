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
    di(k);
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    sort(all(v));
    int rem = n;
    int cur = 0;
    vecll temp;
    while (rem > 0)
    {
        if (2 * k <= rem)
        {
            temp.pb(v[cur + k - 1] - v[cur]);
            cur += k;
            rem -= k;
        }
        else
        {
            temp.pb(v.back() - v[cur]);
            rem = 0;
        }
    }
    int maxi = 0;
    for (auto &&i : temp)
    {
        cout << i << endl;
        maxi = max(maxi, i);
    }
    cout << maxi << endl;
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