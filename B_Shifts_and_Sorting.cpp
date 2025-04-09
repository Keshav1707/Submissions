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
    int one = 1;
    int sum = 0;
    int n = s.size();
    for (ll i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i] == '1')
        {
            n = i;
            break;
        }
    }

    for (ll i = n; i < s.size(); i++)
    {
        if (s[i] == '1')
            one++;
        else
            sum += one;
    }
    cout << sum << endl;
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