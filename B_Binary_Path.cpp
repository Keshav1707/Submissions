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
    vector<vector<int>> v;
    for (ll i = 0; i < 2; i++)
    {
        vecll temp;
        for (ll i = 0; i < x; i++)
        {
            char c;
            cin >> c;
            temp.pb(c - '0');
        }
        v.pb(temp);
    }
    ll move = x - 1;
    for (ll i = 1; i < x; i++)
    {
        if (v[0][i] == 1 && v[1][i - 1] == 0)
        {
            move = i - 1;
            break;
        }
    }
    for (ll i = 0; i <= move; i++)
    {
        cout << v[0][i];
    }
    for (ll i = move; i < x; i++)
    {
        cout << v[1][i];
    }
    cout << endl;
    int c = 1;
    for (ll i = move; i >= 1; i--)
    {
        if (v[1][i - 1] == v[0][i])
            c++;
        else
            break;
    }
    cout << c << endl;
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