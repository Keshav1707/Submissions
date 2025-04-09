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
    di(x);
    vecll v(x);
    for (auto &&i : v)
    {
        cin >> i;
    }
    if (x == 2)
    {
        cout << min(v[0], v[1]) << endl;
        return;
    }
    else
    {
        int mini = 0;
        for (ll i = 0; i < x - 2; i++)
        {
            vecll temp = {v[i], v[i + 1], v[i + 2]};
            sort(all(temp));
            mini = max(mini, temp[1]);
        }
        cout << mini << endl;
        return;
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