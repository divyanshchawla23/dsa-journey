#include <bits/stdc++.h>
using namespace std;

void dfs(int start, vector<int> &ans, vector<vector<int>> &adj, int n, vector<int> &vis)
{
    vis[start] = 1;
    ans.push_back(start);

    for (auto it : adj[start])
    {
        if (!vis[it])
        {
            dfs(it, ans, adj, n, vis);
        }
    }
}

int main()
{

    int n = 5, m = 4;
    vector<vector<int>> adj(n + 1);
    vector<int> vis(n + 1);

    // Edges: (1-2), (1-3), (2-4), (5-1)
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[5].push_back(1);
    adj[1].push_back(5);

    cout << "DFS starting from node 1: ";
    vector<int> ans;

    dfs(1, ans, adj, n, vis);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    cout << "\n";

    return 0;
}
