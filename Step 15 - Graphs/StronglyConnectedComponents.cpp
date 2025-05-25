#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void dfs(int node, vector<vector<int>> &adj, stack<int> &st, vector<int> &vis)
    {

        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, st, vis);
            }
        }

        st.push(node);
    }

    void dfs2(int node, vector<vector<int>> &adj, vector<int> &vis)
    {

        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs2(it, adj, vis);
            }
        }
    }

public:
    int kosaraju(vector<vector<int>> &adj)
    {
        // code here
        int ans = 0;
        int n = adj.size();

        stack<int> st;
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, st, vis);
            }
        }

        vector<vector<int>> adjT(n);

        for (int i = 0; i < adj.size(); i++)
        {
            for (auto it : adj[i])
            {
                adjT[it].push_back(i);
            }
        }

        for (auto &it : vis)
        {
            it = 0;
        }

        while (!st.empty())
        {
            int nd = st.top();
            st.pop();
            if (!vis[nd])
            {
                ans++;
                dfs2(nd, adjT, vis);
            }
        }

        return ans;
    }
};