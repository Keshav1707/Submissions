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
    di(m);
    map<char, int> mp;
    string s;
    cin >> s;
    for (char c = 'A'; c <= 'G'; c++)
    {
        mp[c] = 0;
    }
    for (auto &&i : s)
    {
        mp[i]++;
    }
    ll ans = 0;
    for (auto &&i : mp)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.second < m)
            ans += (m - i.second);
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