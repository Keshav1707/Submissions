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
    vector<vector<char>> v(x);
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < x; j++)
        {
            char c;
            cin >> c;
            v[i].pb(c);
        }
    }
    int a, b;
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < x; j++)
        {
            char c;
            cin >> c;
            if (c != v[i][j])
            {
                a = i + 1;
                b = j + 1;
                i = x + 1;
                break;
            }
        }
    }
    cout << a << " " << b << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}