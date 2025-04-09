#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define sz(x) ((int)(x).size())
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define endl "\n"
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
typedef priority_queue<int, vector<int>, greater<int>> minheap;
typedef priority_queue<int> maxheap;
const int MOD = 1e9 + 7;

typedef uint64_t u64;
void solve()
{

    di(n);
    vecll v(n);
    int a = 0;
    int b = 0;
    int mini = LLONG_MAX;
    int find = -1;
    int ind = 0;
    for (auto &&i : v)
    {
        cin >> i;
        b = b | i;
        int x = i;
        if (mini > x)
        {
            mini = x;
            find = ind;
        }
        ind++;
    }

    // sort(all(v));
    ind = 0;
    int sind = -1;
    int minis = LLONG_MAX;

    for (auto &&i : v)
    {
        if (ind == find)
        {
            ind++;
            continue;
        }
        if (minis >= (mini & i))
        {
            sind = ind;
            minis = mini & i;
        }
        ind++;
    }

    for (ll i = 0; i < n; i++)
    {
        if (i == find || i == sind)
        {
            a |= (v[i] ^ ((u64(1) << 63) - 1));
        }
        else
            a |= v[i];
    }

    cout << find + 1 << " " << sind + 1 << endl;
    cout << mini << " " << v[sind] << endl;
    cout << a << " " << b << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
