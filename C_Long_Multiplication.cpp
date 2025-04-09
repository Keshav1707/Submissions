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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 < s2)
    {
        swap(s1, s2);
    }
    int cnt = 0;
    bool flag = false;
    for (ll i = 0; i < s1.length(); i++)
    {
        if (s1[i] > s2[i] && flag == 0)
        {
            flag = 1;
        }
        else if (s2[i] < s1[i])
            swap(s1[i], s2[i]);
    }

    cout << s1 << endl
         << s2 << endl;
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