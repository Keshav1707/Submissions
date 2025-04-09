#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = LLONG_MAX;
struct Edge
{
    ll u, v, w;
};
void dijkstra(ll start, ll n, vector<vector<pair<ll, ll>>> &adj, vector<ll> &dist)
{
    dist.assign(n + 1, INF);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        ll d = pq.top().first;
        ll node = pq.top().second;
        pq.pop();

        if (d > dist[node])
            continue;

        for (auto &neighbor : adj[node])
        {
            ll next = neighbor.first, weight = neighbor.second;
            if (dist[node] + weight < dist[next])
            {
                dist[next] = dist[node] + weight;
                pq.push({dist[next], next});
            }
        }
    }
}

int main()
{
    ll n, m, s, t;
    cin >> n >> m >> s >> t;

    vector<Edge> edges(m);
    vector<vector<pair<ll, ll>>> adj(n + 1);
    for (ll i = 0; i < m; ++i)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }
    vector<ll> distFromS;
    dijkstra(s, n, adj, distFromS);

    vector<ll> distFromT;
    dijkstra(t, n, adj, distFromT);
    vector<ll> results(m);
    for (ll i = 0; i < m; ++i)
    {
        ll u = edges[i].u, v = edges[i].v, w = edges[i].w;
        if (distFromS[u] != INF && distFromT[v] != INF)
        {

            results[i] = distFromS[u] + w + distFromT[v];
        }
        else if (distFromS[v] != INF && distFromT[u] != INF)
        {

            results[i] = distFromS[v] + w + distFromT[u];
        }
        else
        {

            results[i] = -1;
        }
    }
    for (ll i = 0; i < m; ++i)
    {
        cout << results[i] << " ";
    }
    cout << endl;
    return 0;
}