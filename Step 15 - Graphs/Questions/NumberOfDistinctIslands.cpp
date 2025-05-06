#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &vis,
             int drow[], int dcol[], vector<pair<int, int>> &v, int row0, int col0)
    {

        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        v.push_back({row - row0, col - col0});

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 &&
                grid[nrow][ncol] == 1)
            {
                dfs(nrow, ncol, grid, vis, drow, dcol, v, row0, col0);
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        set<vector<pair<int, int>>> st;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vector<pair<int, int>> v;
                if (grid[i][j] == 1 && vis[i][j] == 0)
                {
                    dfs(i, j, grid, vis, drow, dcol, v, i, j);
                    st.insert(v);
                }
            }
        }

        return st.size();
    }
};