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
    di(m);
    di(q);
    vecll t;
    for (ll i = 0; i < m; i++)
    {
        di(x);
        t.pb(x);
    }
    sort(all(t));
    while (q--)
    {
        di(d);

        if (d > t.back())
        {
            cout << n - (t.back()) << endl;
        }
        else if (d < t[0])
        {
            cout << t[0] - 1 << endl;
        }
        else
        {
            int ub = upper_bound(all(t), d) - t.begin();
            if (t[ub] == d)
            {
                cout << 0 << endl;
            }
            cout << (t[ub] - t[ub - 1]) / 2 << endl;
        }
    }
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