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
void rec(int i, int j, vector<vector<pair<char, int>>> &v, int e, bool &flag)
{
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j].first == '#' || v[i][j].first == 'x' || e == 0)
        return;
    if (v[i][j].first == 'T' || flag == true)
    {
        flag = true;
        return;
    }
    v[i][j].first = 'x';
    rec(i - 1, j, v, e + v[i - 1][j].second - 1, flag);

    rec(i + 1, j, v, e + v[i + 1][j].second - 1, flag);

    rec(i, j - 1, v, e + v[i][j - 1].second - 1, flag);

    rec(i, j + 1, v, e + v[i][j + 1].second - 1, flag);

    v[i][j].first = '.';
}
void solve()
{
    di(x);
    di(y);
    pairs start;
    vector<vector<pair<char, int>>> v(x, vector<pair<char, int>>(y, {'y', 0}));
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < y; j++)
        {
            char c;
            cin >> c;
            if (c == 'S')
                start = {i, j};
            v[i][j].first = c;
        }
    }
    di(e);
    for (ll i = 0; i < e; i++)
    {
        di(a);
        di(b);
        di(c);
        v[a - 1][b - 1].second = c;
    }
    bool flag = false;
    rec(start.first, start.second, v, v[start.first][start.second].second, flag);
    cout << flag << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}