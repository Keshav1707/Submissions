#include <iostream>
#include <vector>

using namespace std;

long long count_triplets(int n, int x) {
    vector<vector<long long>> dp(x + 1, vector<long long>(x + 1, 0));
    
    // Initialize base cases
    for (int i = 1; i <= x; ++i) {
        dp[i][i] = 1;
    }
    
    // Fill dp table
    for (int s = 3; s <= x; ++s) {
        for (int a = 1; a < s; ++a) {
            for (int b = 1; b < s - a; ++b) {
                int c = s - a - b;
                if (c > 0 && 1LL * a * a + 1LL * b * b + 1LL * c * c <= 2LL * n - 1LL * s * (s - 1)) {
                    dp[s][a]++;
                }
            }
        }
    }
    
    // Sum up all valid triplets
    long long result = 0;
    for (int s = 3; s <= x; ++s) {
        for (int a = 1; a < s; ++a) {
            result += dp[s][a];
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << count_triplets(n, x) << endl;
    }
    
    return 0;
}