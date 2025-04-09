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

    vecll v;
    map<int, int> m;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        m[x]++;
        // cout << v.back() << " ";
    }
    if (n == 1)
    {
        cout << v[0] + k << endl;
        return;
    }
    // cout << endl;
    vector<pairs> va;
    for (auto &&i : m)
    {
        va.pb({i.first, i.second});
    }
    int curr = v[0];
    int freq = va[0].second;
    for (ll i = 1; i < n; i++)
    {

        if ((va[i].first - va[i - 1].first) * freq <= k)
        {
            k -= (va[i].first - va[i - 1].first) * freq;
            curr = va[i].first;
        }
        else
            break;
        freq += va[i].second;
    }
    if (k >= freq)
    {
        curr += k / freq;
        k = k % freq;
    }
    // cout << curr << " " << (n - freq + k) << endl;
    cout << ((curr - 1) * n) + 1 + (n - freq + k) << endl;
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