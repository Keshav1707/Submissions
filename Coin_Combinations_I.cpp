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

    for (int i = 1; i <= n; i++)
    {

        for (int c : v)
        {
            if (i - c >= 0)
            {
                (dp[i] += dp[i - c]) %= MOD;
            }
        }
    }

    cout << dp[n] << "\n";
}