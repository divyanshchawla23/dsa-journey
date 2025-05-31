#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int timer = 1;
    void dfs(int node, int parent, vector<int> &vis,
             vector<int> &tm, vector<int> &lowtm,
             vector<int> adj[], vector<int> &mark)
    {

        vis[node] = 1;
        tm[node] = lowtm[node] = timer;
        timer++;
        int child = 0;
        for (auto it : adj[node])
        {
            if (it == parent)
                continue;
            if (!vis[it])
            {
                dfs(it, node, vis, tm, lowtm, adj, mark);
                lowtm[node] = min(lowtm[it], tm[node]);
                if (lowtm[it] >= tm[node] && parent != -1)
                {
                    mark[node] = 1;
                }
                child++;
            }
            else
            {
                lowtm[node] = min(lowtm[node], tm[it]);
            }
        }
        if (child > 1 && parent == -1)
        {
            mark[node] = 1;
        }
    }

public:
    vector<int> articulationPoints(int n, vector<int> adj[])
    {
        // Code here
        vector<int> tm(n);
        vector<int> lowtm(n);
        vector<int> vis(n);
        vector<int> mark(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i, -1, vis, tm, lowtm, adj, mark);
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (mark[i] == 1)
            {
                ans.push_back(i);
            }
        }
        if (ans.size() == 0)
            return {-1};
        return ans;
    }
};