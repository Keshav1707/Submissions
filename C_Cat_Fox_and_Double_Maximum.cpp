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
vector<int> fun(vector<int> v, int x)
{
    vector<pairs> p, pa;
    for (ll i = 0; i < x; i++)
    {
        if (i & 1 && i < x - 1)
        {
            p.pb({v[i], i});
        }
        else
        {
            pa.pb({v[i], i});
        }
    }
    int a = x;
    sort(all(p));
    sort(all(pa));
    for (ll i = 0; i < p.size(); i++)
    {
        p[i].first = a;
        a--;
    }
    for (ll i = 0; i < pa.size(); i++)
    {
        pa[i].first = a;
        a--;
    }
    vector<ll> ans(x);
    for (auto &&i : p)
    {
        ans[i.second] = i.first;
    }
    for (auto &&i : pa)
    {
        ans[i.second] = i.first;
    }
    return ans;
}
void solve()
{
    di(x);
    vecll v;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    vector<int> ans = fun(v, x);
    vecll va = v;
    reverse(all(va));
    vector<int> ansa = fun(va, x);

    int ct = 0;
    for (ll i = 1; i < x - 1; i++)
    {
        int a = ans[i] + v[i], b = ans[i - 1] + v[i - 1], c = ans[i + 1] + v[i + 1];
        if (b < a && c < a)
            ct++;
    }
    int cta = 0;
    for (ll i = 1; i < x - 1; i++)
    {
        int a = ansa[i] + va[i], b = ansa[i - 1] + va[i - 1], c = ansa[i + 1] + va[i + 1];
        if (b < a && c < a)
            cta++;
    }
    reverse(all(ansa));
    cout << ct << " " << cta << endl;
    if (cta > ct)
        ans = ansa;

    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    // for (auto &&i : ansa)
    // {
    //     cout << i << " ";
    // }
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