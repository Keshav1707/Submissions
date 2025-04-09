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
    di(n);
    di(k);
    if (n == 1)
    {
        cout << k << endl;
        return;
    }

    int c = 0;
    if (k + 1 == (1 << ((int)log2(k))))
    {
        cout << k << " ";
    }
    else
    {
        cout << (1 << (int)log2(k)) - 1 << " ";
        c = k - ((1 << (int)log2(k)) - 1);
    }
    for (int i = 0; i < (n - 1); i++)
    {
        cout << c << " ";
        c = 0;
    }
    cout << endl;
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