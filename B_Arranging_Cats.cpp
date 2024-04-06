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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(x);
    int a = 0, b = 0;
    string s, sa;
    cin >> s >> sa;
    for (ll i = 0; i < x; i++)
    {
        if (s[i] == '1' && sa[i] == '0')
            a++;
        else if (s[i] == '0' && sa[i] == '1')
            b++;
    }
    cout << max(a, b) << endl;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}