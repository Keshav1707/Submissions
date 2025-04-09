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
int subarraysWithXorK(vector<int> a, int k)
{
    int n = a.size();
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {

        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
void solve()
{
    di(n);
    di(x);
    vecll v;
    for (int i = 0; i < n; i++)
    {
        di(b);
        v.pb(b ^ x);
        // cout << v.back() << endl;
    }
    cout << subarraysWithXorK(v, 0) << endl;
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