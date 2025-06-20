#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
    int spanningTree(int V, vector<vector<int>> adj[])
    {

        vector<int> vis(V, 0);

        //{{wt,node},parent};
        priority_queue<pair<pair<int, int>, int>,
                       vector<pair<pair<int, int>, int>>,
                       greater<pair<pair<int, int>, int>>> pq;

        pq.push({{0, 0}, -1});

        int ans = 0;

        while (!pq.empty())
        {
            int node = pq.top().first.second;
            int wt = pq.top().first.first;
            int parent = pq.top().second;
            pq.pop();

            if (vis[node]) continue;     // if it is visited, it is the part of our MST, so continue;

            vis[node] = 1;

            if (parent != -1) v.push_back({{nd, parent}, wt});  // this line is for storing the tree edges

            ans += wt;

            for (auto it : adj[node])
            {

                if (!vis[it[0]])
                {
                    pq.push({{it[1], it[0]}, node});
                }
            }
        }

        return ans;
    }
};