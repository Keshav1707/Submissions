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
    string s;
    cin >> s;
    int ans = 1;
    bool flag = 0;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            ans++;
        if (s[i] - s[i - 1] == 1)
            flag = 1;
        // cout << s[i] - s[i - 1] << endl;
    }
    if (flag == 1)
        cout << ans - 1 << endl;

    else
        cout << ans << endl;
    // cout << endl;
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