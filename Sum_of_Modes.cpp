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
    int a = 0;
    int f = 0;
    map<int, int> m;
    for (int i = 0; i < x; i++)
    {
        char c;
        cin >> c;
        if (c == '1')
            a += 1;
        else
            a -= 1;
        m[a]++;
    }

    for (auto &&i : m)
    {
        if (i.first == 0)
        {
            f += i.second;
        }
        if (i.second > 1)
        {
            f += ((i.second) * (i.second - 1)) / 2;
        }
        // cout << i.first << " " << i.second << endl;
    }
    cout << f + (x * (x + 1)) / 2 << endl;
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