
#include <bits/stdc++.h>
using namespace std;

int minCost(vector<vector<int>> &graph, int n)
{

    int cost1 = 0, cost2 = 0;

    bool start[n + 1] = {false};
    bool end[n + 1] = {false};

    for (int i = 0; i < n; i++)
    {

        int a = graph[i][0];
        int b = graph[i][1];
        int c = graph[i][2];

        if (start[a] || end[b])
        {
            cost2 += c;
            start[b] = true;
            end[a] = true;
        }

        else
        {
            cost1 += c;
            start[a] = true;
            end[b] = true;
        }
    }

    return min(cost1, cost2);
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph.push_back({a, b, c});
    }

    int ans = minCost(graph, n);
    cout << ans << '\n';

    return 0;
}
