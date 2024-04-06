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
    di(m);
    di(k);
    int maxa = 0, mina = LLONG_MAX, suma = 0, maxb = 0, minb = LLONG_MAX;
    for (size_t i = 0; i < n; i++)
    {
        di(x);
        suma += x;
        maxa = max(maxa, x);
        mina = min(mina, x);
    }
    for (ll i = 0; i < m; i++)
    {
        di(x);
        maxb = max(maxb, x);
        minb = min(minb, x);
    }
    if (maxa > maxb)
    {
        if (k == 1)
        {
            cout << suma + maxb - mina;
        }

        else if (k % 2 == 1)
        {
            cout << suma + maxa - min(mina, minb);
        }
        else
        {
            cout << suma - maxa + min(mina, minb);
        }
    }
    else
    {
        if (k == 1)
        {
            cout << suma + maxb - mina;
        }
        else if (k % 2 == 1)
        {
            cout << suma + maxb - min(mina, minb);
        }
        else
        {
            cout << suma - maxb + min(mina, minb);
        }
    }
    cout << endl;
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