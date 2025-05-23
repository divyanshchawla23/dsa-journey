#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{

    vector<int> parent, size;

public:
    DisjointSet(int n)
    {
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findUltParent(int n)
    {
        if (parent[n] == n)
        {
            return n;
        }
        return parent[n] = findUltParent(parent[n]);
    }

    void unionbySize(int u, int v)
    {

        int ult_u = findUltParent(u);
        int ult_v = findUltParent(v);

        if (size[ult_u] < size[ult_v])
        {
            size[ult_v] += size[ult_u];
            parent[ult_u] = ult_v;
        }
        else
        {
            size[ult_u] += size[ult_v];
            parent[ult_v] = ult_u;
        }
    }
};
class Solution
{
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        // code here
        vector<int> ans;
        DisjointSet ds(n * m);
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};

        for (auto it : operators)
        {

            int row = it[0];
            int col = it[1];

            if (vis[row][col])
            {
                ans.push_back(cnt);     // if visited, same cnt should be pushed in ans
                continue;
            }
            else            // if not visited 
            {
                vis[row][col] = 1;
                cnt++;                      // increase cnt 
                for (int i = 0; i < 4; i++)
                {
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];

                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                        vis[nrow][ncol] == 1)
                    {
                        int nd = row * m + col;
                        int adjnd = nrow * m + ncol;
                        if (ds.findUltParent(nd) != ds.findUltParent(adjnd))        // if they are not connected bt same parent 
                        {
                            cnt--;
                            ds.unionbySize(nd, adjnd);          // connect them and then decrease the cnt;
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};