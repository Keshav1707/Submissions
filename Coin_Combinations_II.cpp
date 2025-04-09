#include <bits/stdc++.h>
using namespace std;
const int MOD = (1e9 + 7);

int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> v(x), dp(n + 1);
    for (auto &&i : v)
    {
        cin >> i;
    }

    dp[0] = 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = v[i - 1]; j <= n; j++)
        {
            dp[j] += dp[j - v[i - 1]];
            dp[j] %= MOD;
        }
    }

    cout << dp[n] << "\n";
}