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
    di(a);
    di(b);
    vector<vector<char>> v(a);
    for (auto &&i : v)
    {
        for (ll j = 0; j < b; j++)
        {
            char c;
            cin >> c;
            i.pb(c);
        }
    }
    if (v[0][0] == v[a - 1][b - 1] || v[0][b - 1] == v[a - 1][0])
    {
        cout << "YES" << endl;
        return;
    }
    if (v[0][0] == v[a - 1][0])
    {
        for (ll i = 0; i < a; i++)
        {
            if (v[i][b - 1] == v[0][0])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    if (v[0][0] == v[0][b - 1])
    {
        for (ll i = 0; i < b; i++)
        {
            if (v[a - 1][i] == v[0][0])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    if (v[a - 1][b - 1] == v[0][b - 1])
    {
        for (ll i = 0; i < a; i++)
        {
            if (v[i][0] == v[a - 1][b - 1])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    if (v[a - 1][b - 1] == v[a - 1][0])
    {
        for (ll i = 0; i < b; i++)
        {
            if (v[0][i] == v[a - 1][b - 1])
            {
                cout << "YES" << endl;
                return;
            }
        }
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