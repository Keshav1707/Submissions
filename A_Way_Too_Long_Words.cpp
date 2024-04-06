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
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = s.length();
        if (s.length() > 10)
        {
            cout << s[0] << a - 2 << s[a - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}