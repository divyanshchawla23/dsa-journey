#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<vector<int>> adj)
{

    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u;
        int v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    printGraph(adj);
}