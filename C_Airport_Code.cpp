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
    string s, t;
    cin >> s >> t;
    for (ll i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    int c = 0;
    int ind = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (ind == t.size())
            break;
        if (s[i] == t[ind])
            c++, ind++;
    }
    if (c == 3)
        cout << "Yes" << endl;
    else if (c == 2 && t[2] == 'x')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    // cout << s << " " << t << " " << c << endl;
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