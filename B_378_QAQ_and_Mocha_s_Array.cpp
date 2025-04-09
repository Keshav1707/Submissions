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
    vecll v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    sort(all(v));
    int a = 1;
    bool flag = 0;
    int p = n;
    for (ll i = 1; i < n; i++)
    {
        if (v[i] % v[0] == 0)
        {
            a++;
            v[i] = -1;
        }
        else if (flag == 0)
        {
            flag = 1;
            p = i;
        }
    }

    if (flag)
    {
        a++;
        for (ll i = p + 1; i < n; i++)
        {
            if (v[i] % v[p] == 0 && v[i] != -1)
            {
                a++;
            }
        }
    }
    if (a == n)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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