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
    int sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> v(n + 1, 0);

    int suma = 0;
    int ind = n;
    int a = 0;
    while (suma < (sum / 2))
    {
        if (suma + ind <= sum / 2)
        {
            v[ind] = 1;
            suma += ind;
            a++;
        }
        ind--;
    }
    cout << a << endl;
    for (ll i = 1; i < n + 1; i++)
    {
        if (v[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << n - a << endl;
    for (ll i = 1; i < n + 1; i++)
    {
        if (!v[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
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