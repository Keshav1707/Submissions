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
bool comparator(pairs a, pairs b)
{
    if (a.second > b.first)
        return true;
    else
        return false;
}
void solve()
{
    di(x);
    vector<pairs> v;
    for (ll i = 0; i < x; i++)
    {
        di(x);
        v.pb({x, x ^ 4});
    }
    sort(all(v), comparator);
    for (auto &&i : v)
    {
        cout << i.first << " ";
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