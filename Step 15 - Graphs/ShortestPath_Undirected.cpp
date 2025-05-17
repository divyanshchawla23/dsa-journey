#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shortestPath(int n, int m, vector<vector<int>> &edges)
    {
        // Code here
        vector<int> ans;

        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto it : edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        vector<int> dis(n + 1, 1e9);
        vector<int> t(n + 1);
        for (int i = 1; i <= n; ++i)
            t[i] = i;

        // {dist, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 1});

        dis[1] = 0;

        while (!pq.empty())
        {
            int d = pq.top().first;
            int nd = pq.top().second;
            pq.pop();

            for (auto it : adj[nd])
            {
                if (d + it.second < dis[it.first])
                {
                    dis[it.first] = d + it.second;
                    t[it.first] = nd;
                    pq.push({d + it.second, it.first});
                }
            }
        }

        if (dis[n] == 1e9)
            return {-1};

        int node = n;

        while (t[node] != node)
        {
            ans.push_back(node);
            node = t[node];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());

        return ans;
    }
};