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
    vecll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1 || a[i] == 0 || (ans <= 1 && a[i] > 1))
        {
            ans = (ans + a[i]) % MOD;
        }
        else
        {
            ans = (ans * a[i]) % MOD;
        }
    }
    cout << ans << endl;
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