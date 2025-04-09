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
    string s;
    cin >> s;
    ll pone = 0, pzero = 0;
    for (auto &&i : s)
    {
        if (i == '1')
            pone++;
        else
            pzero++;
    }

    ll sone = pone;
    ll szero = 0;
    vector<pairs> v;
    v.pb({0, sone});

    for (auto &&i : s)
    {
        if (i == '0')
            szero++;
        else
            sone--;
        v.pb({szero, sone});
    }
    int ct = 0;
    set<pair<double, int>> x;

    for (auto &&i : v)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.first >= ((ct + 1) / 2) && i.second >= (n - ct + 1) / 2)
        {
            // cout << ct << " ";
            double middis = abs((double)(n) / 2 - ct);
            // cout << middis << endl;
            x.insert({middis, ct});
        }
        ct++;
    }
    // for (auto &&i : x)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << endl;
    auto it = (x.begin());
    cout << (*it).second << endl;
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