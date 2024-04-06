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
bool sortbyCond(const pair<int, int> &a,
                const pair<int, int> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
void solve()
{
    vector<pairs> v, va;
    di(x);
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb({n, i + 1});
    }
    va = v;
    sort(all(v), sortbyCond);
    if (va == v)
    {
        cout << "YES" << endl;
        return;
    }
    for (ll i = 0; i < x; i++)
    {

        if (v[i].first == v[i + 1].first)
            continue;
        if (abs(v[i].second - (i + 1)) == 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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