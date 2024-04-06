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
    deque<int> v;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.push_back(x);
    }
    while (n--)
    {
        if (v.back() < v.front())
            v.push_front(v.back()), v.pop_back();
        else
            break;
    }
    for (auto &&i : v)
    {
        cout << i << " ";
    }
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