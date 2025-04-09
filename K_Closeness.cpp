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
    di(k);
    vecll v;
    int maxi = 0;
    for (ll i = 0; i < x; i++)
    {
        di(a);
        v.pb(a);
        maxi = max(maxi, a);
    }
    for (auto &&i : v)
    {
        i += ((maxi - i) / k) * k;
        // cout << i << " ";
    }
    sort(all(v));
    int mini = v.back() - v[0];
    queue<int> q;
    for (auto &&i : v)
    {
        q.push(i);
    }
    int back = v.back();
    for (ll i = 0; i < x; i++)
    {
        int n = q.front();
        q.pop();
        q.push(n + k);
        mini = min(n + k - q.front(), mini);
    }
    cout << mini << endl;
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