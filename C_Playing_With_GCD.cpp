#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

vector<int> compute_totients(int limit)
{
    vector<int> phi(limit + 1);
    for (int i = 0; i <= limit; i++)
    {
        phi[i] = i;
    }

    for (int i = 2; i <= limit; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= limit; j += i)
            {
                phi[j] = phi[j] * (i - 1) / i;
            }
        }
    }

    return phi;
}

vector<int> compute_g_values(int limit, const vector<int> &phi)
{
    vector<int> g(limit + 1, 0);

    for (int K = 2; K <= limit; K++)
    {
        long long total = 0;
        for (int x = 1; x < K; x++)
        {
            int y = K - x;
            total += (1LL * phi[x] * phi[y]) % MOD;
            total %= MOD;
        }
        g[K] = total;
    }

    return g;
}

vector<int> compute_prefix_sums(const vector<int> &g, int limit)
{
    vector<int> prefix(limit + 1, 0);

    for (int i = 1; i <= limit; i++)
    {
        prefix[i] = (prefix[i - 1] + g[i]) % MOD;
    }

    return prefix;
}

vector<int> answer_queries(const vector<pair<int, int>> &queries, const vector<int> &prefix)
{
    vector<int> results;

    for (const auto &query : queries)
    {
        int l = query.first, r = query.second;
        int result = (prefix[r] - prefix[l - 1] + MOD) % MOD;
        results.push_back(result);
    }

    return results;
}

void solve()
{
    int q, r_max = 0;
    cin >> q;

    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        queries[i] = {l, r};
        r_max = max(r_max, r);
    }

    vector<int> phi = compute_totients(r_max);
    vector<int> g = compute_g_values(r_max, phi);

    vector<int> prefix = compute_prefix_sums(g, r_max);
    vector<int> results = answer_queries(queries, prefix);

    for (int res : results)
    {
        cout << res << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
