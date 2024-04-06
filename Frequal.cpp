#include <bits/stdc++.h>
using namespace std;
int countPartitions(int n, int d, vector<int> &v)
{
    // Write your code here.
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    vector<vector<int>> dp(v.size(), vector<int>(sum + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = true;
    if (v[0] <= sum)
        dp[0][v[0]] = true;
    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= sum; target++)
        {
            int notTaken = dp[ind - 1][target];
            int taken = false;
            if (v[ind] <= target)
                taken = dp[ind - 1][target - v[ind]];
            dp[ind][target] = notTaken + taken;
        }
    }
    int mini = 0;
    for (int i = 0; i <= sum; i++)
    {
        if (dp[n - 1][i] != 0 && (2 * i - sum) == d)
        {
            mini += dp[n - 1][i];
        }
    }
    return mini;
}
int main()
{
    vector<int> v;
    v = {1, 1, 1, 1};
    countPartitions(4, 0, v);
}
