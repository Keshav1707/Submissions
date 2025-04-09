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
vector<bool> prime(1e7, true);
void SieveOfEratosthenes()
{
    prime[1] = false;
    for (int p = 2; p * p <= (int)1e7; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= (int)1e7; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    vecll v;
    int ans = 0;
    for (ll i = 0; i <= 1e7; i++)
    {
        if (prime[i] == true)
            ans += i;
        v.pb(ans);
    }
    di(x);
    cout << v[x] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SieveOfEratosthenes();
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}