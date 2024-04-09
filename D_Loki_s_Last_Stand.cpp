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
vector<pair<int, int>> findPairWithXORSum(multiset<int> &arr, int n)
{
    multiset<int> seen;
    vector<pair<int, int>> pairs;

    for (int num : arr)
    {
        int target = n ^ num;
        if (seen.find(target) != seen.end())
        {
            pairs.push_back(make_pair(num, target));
        }
        seen.insert(num);
    }
    return pairs;
}
void solve()
{
    di(n);
    di(x);
    multiset<int> v;
    vecll temp;
    unordered_map<int, int> mp;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        if (!mp[x])
            mp[x] = i;

        v.insert(x);
        temp.pb(x);
    }
    vector<int> prefix(n);
    int kk = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = kk;
        kk = max(temp[i], kk);
    }

    vector<pair<int, int>> result = findPairWithXORSum(v, x);
    if (result.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    int maxi = -1;
    int a, b, ct = 0, ctb = 0;
    for (auto pair : result)
    {
        // cout << pair.first << ", " << pair.second;
        int ai = pair.first;
        int aj = pair.second;
        int i = mp[ai];
        int j = mp[aj];

        j = max(i, j);
        if (j == n - 1)
            continue;
        int ak = prefix[j];
        maxi = max(maxi, ai + aj + ak);
    }
    cout << maxi << endl;
    // for (auto &&i : temp)
    // {
    //     if (i == a)
    //         break;
    //     ct++;
    // }
    // for (auto &&i : temp)
    // {
    //     if (i == b)
    //         break;
    //     ctb++;
    // }
    // // cout << ct << " " << ctb << endl;
    // ct = max(ct, ctb);
    // v.erase(v.find(a));
    // v.erase(v.find(b));
    // int maxia = 0;
    // for (ll i = ct + 1; i < n; i++)
    // {
    //     maxia = max(maxia, temp[i]);
    // }

    // cout << maxia + a + b << endl;
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