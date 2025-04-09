#include <iostream>
#include <vector>
#include <string>
#define MOD 1000000007

using namespace std;

// Function to calculate the number of paths
int countPaths(int H, int W, vector<string> &S)
{
    // Create a 2D DP table to store the number of ways to reach each cell
    vector<vector<long long>> dp(H, vector<long long>(W, 0));

    // Initialize the starting point
    dp[0][0] = 1;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            // Only consider the cell if it is 'A', 'C', or '.'
            if (S[i][j] == 'A' || S[i][j] == 'C' || S[i][j] == '.')
            {
                // Add paths from the cell above (if within bounds)
                if (i > 0 && (S[i - 1][j] == 'A' || S[i - 1][j] == 'C' || S[i - 1][j] == '.'))
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                }
                // Add paths from the cell to the left (if within bounds)
                if (j > 0 && (S[i][j - 1] == 'A' || S[i][j - 1] == 'C' || S[i][j - 1] == '.'))
                {
                    dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
                }
            }
        }
    }

    // Return the number of ways to reach the bottom-right corner
    return dp[H - 1][W - 1];
}

int main()
{
    int H = 4;
    int W = 2;
    vector<string> S = {"ACCC", "CAA."};
    cout << countPaths(H, W, S) << endl; // Output: number of paths with the same voltage
    return 0;
}
