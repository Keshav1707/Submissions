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
    int ans = 0;
    if (b == 0)
    {
        cout << a << endl;
        return;
    }
    int prev;
    for (ll i = 0; i < 32; i++)
    {
        if (!(a & (1 << i)))
        {
            int x = a | (1 << i);
            int y = x - a;
            if (ans + y > b)
            {
                cout << prev << endl;
                return;
            }
            else
            {
                ans += y;
            }
            prev = x;
        }
    }

    cout << (a) << endl;
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