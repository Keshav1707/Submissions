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
void primeFactors(int n, set<int> &s)
{
    while (n % 2 == 0)
    {
        s.insert(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            s.insert(i);
            n = n / i;
        }
    }
    if (n > 2)
        s.insert(n);
}
void solve()
{
    di(x);
    vecll v;
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb(n);
    }
    multimap<int, set<int>> m;
    set<int> st;
    for (auto &&i : v)
    {
        set<int> temp;

        primeFactors(i, temp);

        m.insert({i, temp});

        for (auto &&i : temp)
        {
            // cout << i << " ";
            st.insert(i);
        }
        // cout << endl;
    }
    int mul = 1;
    for (auto &&i : st)
    {
        mul = mul * i;
    }
    bool flag = 0;
    // cout << mul << endl;
    for (auto &&i : v)
    {
        if (mul % i == 0)
        {
            flag = 1;
        }
    }

    if (flag)
    {
        cout << mul << " " << x << endl;
    }
    else
    {
        int a = 0;
        int mini = INT_MAX;
        for (auto &&i : st)
        {
            for (auto &&j : m)
            {
                if (j.second.find(i) != j.second.end())
                    a++;
            }
            mini = min(a, mini);
            // cout << i << " " << a << endl;
            a = 0;
        }
        cout << x - mini << endl;
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