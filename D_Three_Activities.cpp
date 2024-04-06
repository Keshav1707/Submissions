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
    vector<pair<int, int>> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        a.pb({x, i});
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        b.pb({x, i});
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        c.pb({x, i});
    }
    sort(rall(a));
    sort(rall(b));
    sort(rall(c));
    int sum = 0;
    int ra = 0, rb = 0, rc = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                {

                    sum = max(sum, a[i].first + b[j].first + c[k].first);
                }
            }
        }
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