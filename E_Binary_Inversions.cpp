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
void solve()
{
    di(n);
    vecll v(n), va;
    for (auto &&i : v)
    {
        cin >> i;
        va.pb(i);
    }
    int sum = 0, suma = 0, sumb = 0, zeros = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
            zeros++;
        else
            sum += zeros;
    }
    zeros = 0;
    for (auto &&i : va)
    {
        if (i == 0)
        {
            i = 1;
            break;
        }
    }

    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (va[i] == 0)
                zeros++;
            else
                suma += zeros;
        }
    }
    zeros = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            v[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
            zeros++;
        else
            sumb += zeros;
    }
    cout << max(suma, max(sum, sumb)) << endl;
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