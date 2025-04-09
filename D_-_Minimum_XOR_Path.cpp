#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pairs pair<int, int>

int N, M;
vector<vector<pairs>> G;
int ans = LLONG_MAX;
vector<bool> visited;

void dfs(int v, int xorVal)
{
    visited[v] = true;

    if (v == N - 1)
    {
        ans = min(ans, xorVal);
    }

    for (auto &i : G[v])
    {
        int u = i.first;
        int w = i.second;
        if (!visited[u])
        {
            dfs(u, xorVal ^ w);
        }
    }

    visited[v] = false;
}

void solve()
{
    cin >> N >> M;
    G.resize(N);
    visited.assign(N, false);

    for (int i = 0; i < M; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }

    dfs(0, 0);
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
