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
void printDivisors(int n, vector<int> &v)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.pb(i);

            else
                v.pb(i), v.pb(n / i);
        }
    }
}
void solve()
{
    di(x);
    string s;
    cin >> s;
    vector<int> v;
    printDivisors(x, v);
    sort(all(v));

    for (auto &&i : v)
    {
        int ind = 0;
        vector<string> temp;
        for (ll j = 0; j < x; j += i)
        {
            string t = s.substr(ind, i);
            temp.pb(t);
            // cout << temp.back() << endl;
            ind += i;
        }
        int c = 0, d = 0;
        ;
        for (ll j = 0; j < i; j++)
        {

            for (ll k = 0; k < x / i; k++)
            {

                if (temp[k][j] != temp[0][j])
                    c++;
                if (temp[k][j] != temp[(x / i) - 1][j])
                    d++;
            }
        }
        c = min(c, d);
        if (c == 1 || c == 0)
        {
            cout << i << endl;
            return;
        }
    }
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