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
    di(q);
    map<int, int> m, ma;
    while (q--)
    {
        di(x);
        if (x == 1)
        {
            di(b);
            if (ma[b] != 0)
                ma[b]--;
            m[b]++;
            ma[m[b]]++;
        }
        if (x == 2)
        {
            di(b);
            ma[m[b]]--;
            m[b]++;
            ma[m[b]]++;
        }
        if (x == 3)
        {
            cout << ma.end()->first << endl;
        }
        if (x == 4)
        {
            cout << ma.begin()->first << endl;
        }
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