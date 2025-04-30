#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> &ans, vector<vector<int>> &adj, int n)
{

    vector<int> vis(n + 1, 0);
    queue<int> q;

    q.push(start);
    vis[start] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}

int main()
{

    int n = 5, m = 4;
    vector<vector<int>> adj(n + 1);

    // Edges: (1-2), (1-3), (2-4), (5-1)
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[5].push_back(1);
    adj[1].push_back(5);

    cout << "BFS starting from node 1: ";
    vector<int> ans;

    bfs(1, ans, adj, n);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    cout << "\n";

    return 0;
}
