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
    di(n);
    di(x);
    int res = 0;
    int maxk = (n + 2) / 2;
    for (int i = 2; i <= maxk; i++)
    {
        /* code */
        cout << i << " ";
        int a = n % (2 * i - 2);
        cout << a << " ";
        int ans;
        if (a == 0)
            a = 2 * i - 2;
        if (a > i)
            ans = i - (a - i);
        else
            ans = a;
        if (ans == x)
            res++;
        cout << ans << endl;
    }
    cout << res << endl;
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