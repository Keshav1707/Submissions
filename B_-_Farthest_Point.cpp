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
    vector<pairs> v;
    vector<vector<int>> va;
    for (ll i = 0; i < x; i++)
    {
        di(a);
        di(b);
        v.pb({a, b});
    }
    for (ll i = 0; i < x; i++)
    {
        vecll temp;
        for (ll j = 0; j < x; j++)
        {
            int dis = abs(v[i].first - v[j].first) * abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) * abs(v[i].second - v[j].second);
            temp.pb(dis);
        }
        va.pb(temp);
        int c = 1;
        int maxi = 0, maxind = 1;
        for (auto &&i : temp)
        {
            if (i > maxi)
            {
                maxi = i;
                maxind = c;
            }
            c++;
        }
        cout << maxind << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}