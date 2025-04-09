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
string lastNonEmptyString(string s)
{
    vector<int> v;
    int maxi = 0;
    for (auto i : s)
    {
        v[i - 'a']++;
        int maxi = max(maxi, v[i - 'a']);
    }
    string res;
    for (int i = s.size() - 1; i >= 0; i++)
    {
        if (v[s[i] - 'a'] == maxi)
        {
            res.push_back(s[i]);
            v[s[i] - 'a'] = 0;
        }
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << lastNonEmptyString("aabcbbca");
    // ll t=1;
    // cin>>t;
    // while(t--)
    // {
    // solve();
    //}
    return 0;
}