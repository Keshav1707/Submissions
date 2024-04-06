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
    di(q);
    deque<pair<int, int>> s;
    for (ll i = 0; i < n; i++)
    {
        s.push_back({n - i, 0});
    }
    pair<int, int> h = {1, 0};
    while (q--)
    {
        di(x);
        if (x == 1)
        {
            char c;
            cin >> c;
            if (c == 'U')
            {
                h.second += 1;
                s.push_back(h);
                s.pop_front();
            }
            if (c == 'D')
            {
                h.second -= 1;
                s.push_back(h);
                s.pop_front();
            }
            if (c == 'L')
            {
                h.first -= 1;
                s.push_back(h);
                s.pop_front();
            }
            if (c == 'R')
            {
                h.first += 1;
                s.push_back(h);
                s.pop_front();
            }
        }
        else
        {
            di(p);
            cout << s[n - p].first << " " << s[n - p].second << endl;
        }
    }
}
signed main()
{
    ll t = 1;

    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}