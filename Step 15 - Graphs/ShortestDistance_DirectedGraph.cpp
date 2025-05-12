#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void tposrt(int node, vector<int> &vis,
                vector<vector<pair<int, int>>> &adj, stack<int> &st)
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it.first])
            {
                tposrt(it.first, vis, adj, st);
            }
        }

        st.push(node);
    }

public:
    vector<int> shortestPath(int V, int E, vector<vector<int>> &edges)
    {
        vector<vector<pair<int, int>>> adj(V);

        for (int i = 0; i < E; i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }

        vector<int> dis(V, INT_MAX);
        vector<int> vis(V, 0);
        stack<int> st;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                tposrt(i, vis, adj, st);
            }
        }

        // do the distance thing -->

        // start node distance equals 0 ;

        // stack pop, traverse the adj[top]

        // check if new distace is less than the old if yes store it in dist array

        dis[0] = 0;

        while (!st.empty())
        {
            int node = st.top();
            st.pop();
            if (dis[node] != INT_MAX)
            {
                for (auto it : adj[node])
                {
                    int d = it.first;
                    int w = it.second;

                    if (dis[d] > dis[node] + w)
                    {
                        dis[d] = dis[node] + w;
                    }
                }
            }
        }

        // Replace INT_MAX with -1 to match expected output
        for (int i = 0; i < V; i++)
        {
            if (dis[i] == INT_MAX)
                dis[i] = -1;
        }

        return dis;
    }
};