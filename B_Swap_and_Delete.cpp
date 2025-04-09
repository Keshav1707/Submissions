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
    string s, sa;
    cin >> s;
    sa = s;
    ll z = 0, o = 0;
    for (auto &&i : s)
    {
        if (i == '0')
            z++;
        else
            o++;
    }
    if (o == z)
    {
        cout << "0" << endl;
        return;
    }
    int ind = 0;
    while (ind < sa.size())
    {
        if (s[ind] == '0')
        {
            if (o == 0)
                break;
            o--;
        }
        else
        {
            if (z == 0)
                break;
            z--;
        }
        ind++;
    }
    cout << s.size() - ind << endl;
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