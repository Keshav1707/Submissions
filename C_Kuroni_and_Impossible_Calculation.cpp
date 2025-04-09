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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
signed main()
{
    di(n);
    di(m);
    vecll v;
    for (size_t i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    ll ans = 1;
    if (n > m)
    {
        cout << 0 << endl;
        return 0;
    }
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            /* code */
            ans = (ans % m * (abs(v[i] - v[j]) % m)) % m;
            if (ans == 0)
                break;
        }
    }
    cout << ans << endl;
    return 0;
}