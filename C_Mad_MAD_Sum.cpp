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
    map<int, int> m;
    vector<pairs> v;

    int maxele = 0;
    int sum = 0;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        sum += x;
        m[x]++;
        if (m[x] > 1 && x > maxele)
        {
            maxele = x;
        }
        v.push_back({x, maxele});
    }
    vector<int> va;
    map<int, int> mp;
    for (auto &&i : v)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.second > 0)
        {
            va.pb(i.second);
            mp[i.second]++;
        }
        sum += i.second;
    }
    int f = 0;

    for (auto &&i : mp)
    {

        if (i.second > 1)
            f += i.second;
    }
    if (f == 0)
    {
        cout << sum << endl;
        return;
    }
    f--;
    // cout << f << endl;
    for (auto &&i : va)
    {
        sum += i * f;
        f--;
    }
    cout << sum << endl;
    // cout << endl;
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