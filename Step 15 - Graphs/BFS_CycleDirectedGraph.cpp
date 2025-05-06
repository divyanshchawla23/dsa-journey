#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isCyclic(int V, vector<vector<int>> &edges)
    {
        // code here
        vector<vector<int>> adj(V);

        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }

        queue<int> q;
        vector<int> inDegree(V, 0);

        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                inDegree[it]++;
            }
        }

        for (int i = 0; i < V; i++)
        {
            if (inDegree[i] == 0)
                q.push(i);
        }

        int cnt = 0;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cnt++;
            for (auto it : adj[node])
            {
                inDegree[it]--;
                if (inDegree[it] == 0)
                    q.push(it);
            }
        }

        if (cnt == V)
            return false;
        else
            return true;
    }
};