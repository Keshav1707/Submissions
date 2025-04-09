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
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(x);
    vector<vector<char>> v;
    for (ll i = 0; i < x; i++)
    {
        vector<char> va;
        for (ll j = 0; j < x; j++)
        {
            char x;
            cin >> x;
            va.pb(x);
        }
        v.pb(va);
    }

    for (ll i = 0; i < x; i++)
    {

        for (ll j = 0; j < x; j++)
        {
            if (v[i][j] == '1' && v[i + 1][j] == '1' && v[i][j + 1] == '1')
            {
                cout << "SQUARE" << endl;
                return;
            }
            else if (v[i][j] == '1')
            {
                cout << "TRIANGLE" << endl;
                return;
            }
        }
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