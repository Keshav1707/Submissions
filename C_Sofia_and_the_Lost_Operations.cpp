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
    vecll v, va, vb;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    for (ll i = 0; i < n; i++)
    {
        di(x);
        va.pb(x);
    }
    for (ll i = 0; i < n; i++)
    {
        if (va[i] != v[i])
            vb.pb(va[i]);
    }
    di(q);
    vector<int> temp;
    map<int, int> mp;
    for (int i = 0; i < q; ++i)
    {
        di(x);
        temp.pb(x);
        mp[x]++;
    }
    bool flag = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != va[i])
            mp[va[i]]--;
        if (temp[q - 1] == va[i])
            flag = true;
    }

    for (auto i : mp)
    {
        if (i.second < 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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