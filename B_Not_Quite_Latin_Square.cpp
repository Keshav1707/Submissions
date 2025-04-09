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
    int A = 0, B = 0, C = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            /* code */
            char c;
            cin >> c;
            if (c == 'A')
                A++;
            if (c == 'B')
                B++;
            if (c == 'C')
                C++;
        }
    }
    if (A == 2)
        cout << "A" << endl;
    else if (B == 2)
        cout << "B" << endl;
    else
        cout << "C" << endl;
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