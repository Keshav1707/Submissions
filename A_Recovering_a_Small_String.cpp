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
    string xa = "zzz";
    for (char a = 'a'; a <= 'z'; ++a)
    {
        for (char b = 'a'; b <= 'z'; ++b)
        {
            for (char c = 'a'; c <= 'z'; ++c)
            {

                string x = string(1, a) + string(1, b) + string(1, c);
                int sum = 0;
                for (char c : x)
                {
                    sum += c - 'a' + 1;
                }

                if (sum == n && x < xa)
                {
                    xa = x;
                }
            }
        }
    }

    cout << xa << endl;
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