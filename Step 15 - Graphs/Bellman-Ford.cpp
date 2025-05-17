#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        // Code here
        vector<int> dis(V, 1e8);
        dis[src] = 0;
        for (int i = 1; i <= V - 1; i++)
        {
            for (auto it : edges)
            {
                int u = it[0];
                int v = it[1];
                int d = it[2];

                if (dis[u] != 1e8 && dis[u] + d < dis[v])
                {
                    dis[v] = d + dis[u];
                }
            }
        }

        for (auto it : edges)       // 1 MORE TIME HONA HI NAHI CHAHIYE
        { 
            int u = it[0];
            int v = it[1];
            int d = it[2];

            if (dis[u] != 1e8 && dis[u] + d < dis[v])   // YE DISTANCE[] REDUCE HONI HI NAHI CHAHIYE, Nth TIME TO RETURN -1
            { 
                return {-1};
            }
        }

        return dis;
    }
};