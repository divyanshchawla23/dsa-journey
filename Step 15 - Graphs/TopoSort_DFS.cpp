#include <iostream>
using namespace std;

class Solution
{
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis, stack<int> &st)
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {

            if (!vis[it])
            {
                dfs(it, adj, vis, st);
            }
        }

        st.push(node);
    }

    vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
    {
        // Write your code here
        int n = edges.size();
        vector<vector<int>> adj(v);

        stack<int> st;
        vector<int> vis(v, 0);
        for (int i = 0; i < n; i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }

        for (int i = 0; i < v; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, st);
            }
        }

        vector<int> ans;

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};