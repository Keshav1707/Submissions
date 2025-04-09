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
    di(x);
    string s;
    cin >> s;
    int a = 0, b = 0;
    int N = 0, S = 0, W = 0, E = 0;
    for (auto &&i : s)
    {
        if (i == 'N')
        {
            a++;
            N++;
            if (N % 2)
                i = 'R';
            else
                i = 'H';
        }
        if (i == 'S')
        {
            a--;
            S++;
            if (S % 2)
                i = 'R';
            else
                i = 'H';
        }
        if (i == 'E')
        {
            b++;
            E++;
            if (E % 2)
                i = 'H';
            else
                i = 'R';
        }
        if (i == 'W')
        {
            b--;
            W++;
            if (W % 2)
                i = 'H';
            else
                i = 'R';
        }
    }
    if (a % 2 || b % 2)
    {
        cout << "NO" << endl;
        return;
    }
    set<char> c;
    for (auto &&i : s)
    {
        c.insert(i);
    }
    if (c.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << s << endl;
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