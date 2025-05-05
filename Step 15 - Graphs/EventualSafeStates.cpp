#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool dfs(int node, vector<vector<int>> &graph, vector<int> &vis,
             vector<int> &pathvis, vector<int> &check)
    {

        vis[node] = 1;
        pathvis[node] = 1;

        for (auto it : graph[node])
        {
            if (!vis[it])
            {
                if (dfs(it, graph, vis, pathvis, check) == true)
                    return true;
            }
            else if (pathvis[it])
            {
                return true;
            }
        }

        check[node] = 1; // mark the node as the answer after the sucessfull dfs call ; no cycle is formed ; not part of any cycle ;
        pathvis[node] = 0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> ans;
        vector<int> vis(n, 0);
        vector<int> pathvis(n, 0);
        vector<int> check(n, 0);

        for (int i = 0; i < graph.size(); i++)
        {
            if (!vis[i])
            {
                dfs(i, graph, vis, pathvis, check); //  dfs is bool because if we find a cycle, we return, and mark in the check array;
            } // but we are calling it as a void, but we can always ignore the answer;
        }

        for (int i = 0; i < n; i++)
        {
            if (check[i] == 1)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};