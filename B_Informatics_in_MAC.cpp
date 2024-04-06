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
    map<int, int> m;
    vecll va;
    int maxi = 0;
    for (ll i = 0; i < x; i++)
    {
        di(x);
        m[x]++;
        va.pb(x);
        maxi = max(maxi, x);
    }
    ll mex = maxi + 1;
    for (ll i = 0; i < maxi + 1; i++)
    {
        if (m[i] == 0)
        {
            mex = i;
            break;
        }
    }

    if (mex == 0)
    {
        cout << endl;
        cout << x << endl;
        for (ll i = 0; i < x; i++)
        {
            cout << i + 1 << " " << i + 1 << endl;
        }
        cout << endl;
        return;
    }
    vector<int> res(mex, -1);
    for (ll i = 0; i < x; i++)
    {
        if (va[i] < mex && res[va[i]] == -1)
            res[va[i]] = (i);
    }
    cout << res.back() << endl;
    vector<int> m1(maxi, 0), m2(maxi, 0);
    for (ll i = 0; i <= res.back(); i++)
    {
        m1[va[i]]++;
    }
    for (ll i = res.back() + 1; i < x; i++)
    {
        m2[va[i]]++;
    }
    int mexa = -1, mexb = -1;
    for (ll i = 0; i < maxi; i++)
    {
        if (m1[i] == 0)
        {
            mexa = i;
            break;
        }
    }
    for (ll i = 0; i < maxi; i++)
    {
        if (m2[i] == 0)
        {
            mexb = i;
            break;
        }
    }
    cout << mexa << " " << mexb << endl;
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