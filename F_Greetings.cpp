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

void merge(vector<pair<int, int>> &v, vector<int> &ans,
           int l, int mid, int h)
{

    vector<pair<int, int>>
        t;
    int i = l;
    int j = mid + 1;

    while (i < mid + 1 && j <= h)
    {

        if (v[i].first > v[j].first)
        {
            ans[v[i].second] += (h - j + 1);
            t.push_back(v[i]);
            i++;
        }
        else
        {
            t.push_back(v[j]);
            j++;
        }
    }

    while (i <= mid)
        t.push_back(v[i++]);
    while (j <= h)
        t.push_back(v[j++]);
    for (int k = 0, i = l; i <= h; i++, k++)
        v[i] = t[k];
}

void mergesort(vector<pair<int, int>> &v, vector<int> &ans,
               int i, int j)
{
    if (i < j)
    {
        int mid = (i + j) / 2;

        mergesort(v, ans, i, mid);

        mergesort(v, ans, mid + 1, j);

        merge(v, ans, i, mid, j);
    }
}

vector<int> constructLowerArray(vecll arr)
{
    int n = arr.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({arr[i], i});

    vector<int> ans(n, 0);

    mergesort(v, ans, 0, n - 1);

    return ans;
}

void solve()
{
    di(t);
    vector<pair<int, int>> p;
    unordered_map<int, int> m;
    ll sum = 0;

    for (size_t i = 0; i < t; i++)
    {
        di(a);
        di(b);
        p.pb({a, b});
        m[a]++;
    }
    for (auto &&i : m)
    {
        sum += (i.second * (i.second - 1)) / 2;
    }

    sort(all(p));
    vecll v;

    for (auto &&i : p)
    {
        v.pb(i.second);
    }
    vecll vb = constructLowerArray(v);

    cout << accumulate(all(vb), 0) + sum << endl;
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