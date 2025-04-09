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
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
void solve()
{
    di(n);
    di(f);
    di(k);
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int a = v[f - 1];
    sort(rall(v));
    bool fa = 0, fb = 0;
    for (ll i = 0; i < k; i++)
    {
        if (v[i] == a)
        {
            fa = 1;
            break;
        }
    }
    for (ll i = k; i < n; i++)
    {
        if (v[i] == a)
        {
            fb = 1;
            break;
        }
    }
    if (fa && fb)
    {
        cout << "MAYBE" << endl;
    }
    else if (fa)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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