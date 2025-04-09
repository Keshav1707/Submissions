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
    int xa = x;
    vector<int> v;
    while (x > 0)
    {
        v.pb(x & 1);
        x = x >> 1;
    }
    // reverse(all(v));
    for (int i = v.size(); i < 32; i++)
    {
        v.push_back(0);
    }
    // for (auto &&i : bf)
    // {
    //     cout << i << " ";
    // }
    // bye;

    for (int i = 0; i < 31; ++i)
    {
        if (v[i] == 1 && v[i + 1] == 1)
        {
            v[i] = -1;
            int j;
            for (j = i + 1; j < 32 && v[j] == 1; ++j)
            {
                v[j] = 0;
            }
            if (j < 32)
            {
                v[j] = 1;
            }
            i = j - 1;
        }
    }
    while (v.back() == 0)
    {
        v.pop_back();
    }
    cout << v.size() << endl;

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // bye;
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