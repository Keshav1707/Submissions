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
    string s;
    cin >> s;
    map<char, int> m;
    for (auto &&i : s)
    {
        m[i]++;
    }
    string odd = "";
    string temp = "";
    for (auto &&i : m)
    {
        if (i.second % 2 == 1)
        {
            odd += i.first;

            // return;
        }
        i.second /= 2;

        for (int x = 0; x < i.second; x++)
        {
            temp += i.first;
        }
    }
    if (odd.size() > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string tempb = temp;
    reverse(all(tempb));
    cout << temp + odd + tempb << endl;
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