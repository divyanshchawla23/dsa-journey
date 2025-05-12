#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        // Code here

        vector<vector<pair<int, int>>> adj(V);

        for (auto it : edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>,
        greater<pair<int, int>>>pq;

        vector<int> dis(V, INT_MAX);

        dis[src] = 0;

        // {dis, node}
        pq.push({0, src});

        while (!pq.empty())
        {
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto it : adj[node])
            {
                if (it.second + d < dis[it.first])
                {
                    dis[it.first] = it.second + d;
                    pq.push({it.second + d, it.first});
                }
            }
        }

        return dis;
    }
};