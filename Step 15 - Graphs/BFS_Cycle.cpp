#include <bits/stdc++.h>
using namespace std;

bool detect(int node, vector<vector<int>> &adj, vector<int> &vis)
{

    vis[node] = 1;

    // <node,parent>
    queue<pair<int, int>> q;

    q.push({node, -1});

    while (!q.empty())
    {

        int node = q.front().first;
        int parent = q.front().second;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (it != parent)
                return true;
        }
    }
    return false;
}

int main()
{
    int n = 4; // number of nodes
    vector<vector<int>> adj(n + 1);

    // Edges: (1–2), (2–3), (3–1) => cycle
    // Extra edge: (3–4)
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(1);
    adj[1].push_back(3);

    adj[3].push_back(4);
    adj[4].push_back(3);

    vector<int> ans;
    vector<int> vis(n + 1, 0);
    bool flag = false;

    for (int i = 1; i < n; i++)
    {
        flag = detect(i, adj, vis);
    }

    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}