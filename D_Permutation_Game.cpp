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
    di(k);
    di(pa);
    di(paa);
    vector<int> v(n + 1, 0), a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int sa = a[pa];
    int sb = a[paa];
    vector<int> patha;
    patha.push_back(pa);

    int temp = pa;
    int cur = pa;

    while (true)
    {
        int upcoming = v[cur];
        if (temp == upcoming)
        {
            break;
        }
        patha.push_back(upcoming);
        cur = upcoming;
    }

    vector<int> pathb;
    pathb.push_back(paa);
    temp = paa;
    cur = paa;

    while (true)
    {
        int upcoming = v[cur];
        if (temp == upcoming)
        {
            break;
        }
        pathb.push_back(upcoming);
        cur = upcoming;
    }
    int x = 0;
    for (int i = 0; i < patha.size(); i++)
    {

        int curr = x;
        if (k < i + 1)
        {
            break;
        }
        int mov = k - i;
        curr += mov * a[patha[i]];
        sa = max(sa, curr);
        x = x + a[patha[i]];
    }
    int sum = 0;
    for (auto &&i : v)
    {
        sum += i;
    }
    int sumb = 0;
    for (auto &&i : a)
    {
        sumb += i;
    }
    x = 0;
    for (int i = 0; i < pathb.size(); i++)
    {

        int curr = x;
        if (k < i + 1)
        {
            break;
        }

        int mov = k - i;
        curr += mov * a[pathb[i]];
        sb = max(sb, curr);
        x = x + a[pathb[i]];
    }

    if (sa > sb)
    {
        cout << "Bodya" << endl;
    }
    else if (sb > sa)
    {

        cout << "Sasha" << endl;
    }
    else
    {

        cout << "Draw" << endl;
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