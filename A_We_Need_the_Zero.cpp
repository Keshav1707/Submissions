#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int min_time_to_reach_n(int n, int k, vector<int>& x, vector<int>& s) {
    const int INF = INT_MAX;

    // dp[i][j] represents the minimum time to reach footballer i with j direction changes
    vector<vector<int>> dp(n, vector<int>(k + 1, INF));

    // Initialize base case


    dp[0][0] = 0;

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= k; ++j) {
            for (int prev = 0; prev < i; ++prev) {
                // Calculate time for a direct pass from footballer prev to footballer i
                int time = s[i] * abs(x[i] - x[prev]);

                // Update dp[i][j] considering the direction change
                if (j > 0) {
                    dp[i][j] = min(dp[i][j], dp[prev][j - 1] + time);
                } else {
                    dp[i][j] = min(dp[i][j], dp[prev][j] + time);
                }
            }
        }
    }

    // Find the minimum time to reach footballer n considerin
}