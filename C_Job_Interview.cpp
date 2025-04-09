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
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
void solve()
{
    di(n);
    di(m);
    vector<pair<int, int>> v;
    for (ll i = 0; i < n + m + 1; i++)
    {
        di(a);
        v.pb({a, 0});
    }
    for (ll i = 0; i < n + m + 1; i++)
    {
        di(a);
        v[i].second = a;
    }
    bool f = 0;
    if (n <= m)
        n++;
    else if (n > m)
    {
        f = 1;
        m++;
    }
    int sum = 0;
    vector<pair<int, char>> pa;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i].first > v[i].second && n > 0)
        {
            n--;
            sum += v[i].first;
            pa.pb({v[i].first, 'P'});
        }
        else if (v[i].first < v[i].second && m > 0)
        {
            sum += v[i].second;
            m--;
            pa.pb({v[i].second, 'T'});
        }
        else if (n == 0)
        {
            sum += v[i].second;
            pa.pb({v[i].second, 'T'});
        }
        else if (m == 0)
        {
            sum += v[i].first;
            pa.pb({v[i].first, 'P'});
        }
    }
    if (abs(n - m) == 1)
    {
    }
    else if (!f)
    {
        int x = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (pa[i].second == 'P')
            {
                x = -v[i].first + v[i].second;
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (pa[i].second == 'P')
            {
                cout << sum - pa[i].first << " ";
            }
            else
            {
                cout << sum - pa[i].first + x << " ";
            }
        }
        cout << endl;
    }
    else
    {
        int x = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (pa[i].second == 'T')
            {
                x = v[i].first - v[i].second;
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (pa[i].second == 'T')
            {
                cout << sum - pa[i].first << " ";
            }
            else
            {
                cout << sum - pa[i].first + x << " ";
            }
        }
        cout << endl;
    }
    // for (auto &&i : pa)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << sum << " " << f << endl;
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