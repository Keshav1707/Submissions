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
    string s;
    cin >> s;
    unordered_map<char, int> m;
    ll z = 0, o = 0;
    // cout << s << " ";
    for (auto &&i : s)
    {
        m[i]++;
        if (i == '0')
            z++;
        else
            o++;
    }
    // cout << m.size() << " ";
    if (z > o)
        cout << "YES" << endl;
    else if (m.size() > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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