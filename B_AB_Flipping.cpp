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

    int ind = 0, ans = 0;
    int a = -1, b = -1;
    bool f = 0;
    for (auto &&i : s)
    {

        if (i == 'A' && f == 0)
        {
            a = ind;
            f = 1;
        }
        else if (i == 'B')
            b = ind;
        ind++;
    }
    if (a == -1 || b == -1)
        cout << 0 << endl;
    else if ((b - a) >= 0)
        cout << b - a << endl;
    else
        cout << 0 << endl;
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