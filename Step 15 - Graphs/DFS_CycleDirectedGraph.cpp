#include <iostream>
using namespace std;

bool dfs(int node, vector<int> &vis, vector<int> &pathvis, vector<vector<int>> &adj)
{

    vis[node] = 1;
    pathvis[node] = 1;

    // travel for adj nodes
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, vis, pathvis, adj) == true) return true;
        }
        else if (pathvis[it] == 1)   // visited bhi hai pathvisited bhi hai 
        {
            return true;            // true cycle exists kyuki vis and pathvis nahi ho sakta na same dfs call pe 
        }
    }
    pathvis[node] = 0;              //backtracking like, remove from PathVis as it not on the same path when a new dfs is called
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
    }

    vector<int> vis(n + 1, 0);
    vector<int> pathvis(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i, vis, pathvis, adj) == true)  return true;
        }
    }
    return false;
}