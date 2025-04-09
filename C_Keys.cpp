#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> tests(M);
    vector<char> results(M);

    for (int i = 0; i < M; i++)
    {
        int Ci;
        cin >> Ci;
        tests[i].resize(Ci);
        for (int j = 0; j < Ci; j++)
        {
            cin >> tests[i][j];
        }
        cin >> results[i];
    }

    int valid_combinations = 0;
    int total_combinations = 1 << N; // 2^N combinations

    for (int mask = 0; mask < total_combinations; mask++)
    {
        bool valid = true;
        for (int i = 0; i < M; i++)
        {
            int real_count = 0;
            for (int key : tests[i])
            {
                if (mask & (1 << (key - 1)))
                {
                    real_count++;
                }
            }
            if ((results[i] == 'o' && real_count < K) || (results[i] == 'x' && real_count >= K))
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            valid_combinations++;
        }
    }

    cout << valid_combinations << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
