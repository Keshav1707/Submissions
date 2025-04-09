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
    di(x);
    vecll v;
    multiset<int> s;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    di(k);
    int maxi = 0;
    for (ll i = 0; i < k; i++)
    {
        s.insert(v[i]);
    }
    auto it = s.rbegin();

    int sum = accumulate(v.begin(), v.begin() + k, 0);
    int res = sum - *it;
    cout << res << endl;
    for (ll i = 1; i < x - k + 1; i++)
    {
        s.erase(s.find((v[i - 1])));
        s.insert(v[i + k - 1]);
        for (auto &&i : s)
        {
            cout << i << " ";
        }
        // cout << endl;
        sum = sum - v[i - 1] + v[i + k - 1];
        // cout << v[i - 1] << " " << v[i + k - 1] << endl;
        res = max(sum - *(s.rbegin()), res);
    }

    cout << res << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}