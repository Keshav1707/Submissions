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
bool fun(vector<int> v, int mid, int a)
{
    // cout << mid << endl;
    int o = 0;
    for (int i = 0; i < mid; i++)
    {
        o |= v[i];
    }
    for (int i = 0; i < v.size() - mid; i++)
    {
        int oa = 0;
        for (int j = i; j < i + mid; j++)
        {
            //      cout << j << " ";
            oa |= v[j];
        }
        // cout << endl;
        if (oa != o)
            return false;
    }
    return false;
}
void solve()
{
    di(x);
    vecll v;
    int a = 0;
    for (ll i = 0; i < x; i++)
    {
        /* code */
        di(n);
        a |= n;
        v.pb(n);
    }
    int beg = 1, end = x, mid;
    while (beg < end)
    {
        mid = (beg + end) >> 1;
        if (fun(v, mid, a))
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
    }
    cout << beg << endl;
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