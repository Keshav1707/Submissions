#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n, int k, int a, int b)
{
    pair<int, int> p[n];
    for (auto &&i : p)
        cin >> i.first >> i.second;
    int basic = (abs(p[a - 1].first - p[b - 1].first) + abs(p[a - 1].second - p[b - 1].second));
    int mina = 1e10, minb = 1e10;
    for (size_t i = 0; i < k; i++)
    {
        /* code */
        mina = min(mina, abs(p[a - 1].first - p[i].first) + abs(p[a - 1].second - p[i].second));
        minb = min(minb, abs(p[i].first - p[b - 1].first) + abs(p[i].second - p[b - 1].second));
    }
    cout << min(basic, mina + minb) << endl;
    return 0;
}
signed main()
{
    int t, n, k, a, b;
    cin >> t;
    while (t-- && cin >> n >> k >> a >> b)
    {
        solve(n, k, a, b);
    }
    return 0;
}