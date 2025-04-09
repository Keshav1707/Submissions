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
    string s;
    cin >> s;
    stack<int> lo, up;
    string ans;
    int ind = 0;
    for (auto &&i : s)
    {
        if (i != 'b' && i != 'B')
        {
            if (i >= 'a' && i <= 'z')
                lo.push(ind);
            else
                up.push(ind);
        }
        else
        {
            if (i == 'b' && lo.empty() == 0)
            {

                s[lo.top()] = '0';
                lo.pop();
            }
            else if (i == 'B' && up.empty() == 0)
            {
                i = '0';
                s[up.top()] = '0';
                up.pop();
            }
            else
                i = '0';
        }
        ind++;
    }
    for (auto &&i : s)
    {
        if (i == 'b' || i == 'B' || i == '0')
            continue;
        else
            cout << i;
    }
    cout << endl;
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