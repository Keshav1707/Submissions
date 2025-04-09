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
// vector<ll> adj[4004];
bool bfs(pairs start, vector<string> &v, vector<vecll> &vis, string &s)
{
    int direc[5] = {-1, 0, 1, 0, -1};
    queue<pair<pairs, string>> q;
    q.push({start, ""});
    vis[start.first][start.second] = 1;

    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();

        pairs pos = curr.first;
        string path = curr.second;

        if (v[pos.first][pos.second] == 'B')
        {
            s = path;
            return true;
        }

        for (ll x = 0; x < 4; x++)
        {
            int ni = pos.first + direc[x];
            int nj = pos.second + direc[x + 1];
            if (ni >= 0 && nj >= 0 && ni < v.size() && nj < v[0].size() && vis[ni][nj] == 0 && v[ni][nj] != '#')
            {

                vis[ni][nj] = 1;

                string newPath = path;
                if (x == 0)
                    newPath += 'U';
                if (x == 1)
                    newPath += 'R';
                if (x == 2)
                    newPath += 'D';
                if (x == 3)
                    newPath += 'L';

                q.push({{ni, nj}, newPath});
            }
        }
    }
    return false;
}

void solve()
{
    di(x);
    di(y);
    vector<string> v;
    pair<int, int> strt;
    for (ll i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
        for (ll j = 0; j < y; j++)
        {
            if (v[i][j] == 'A')
                strt = {i, j};
        }
    }

    vector<vector<int>> vis(x, vecll(y, 0));
    string str;
    bool f = bfs(strt, v, vis, str);
    cout << (f ? "YES" : "NO") << endl;
    if (!f)
        return;

    cout << str.size() << endl
         << str << endl;
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