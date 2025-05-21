#include <iostream>
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

    int findUltParent(int v)
    {
        if (parent[v] == v)
        {
            return v;
        }
        return parent[v] = findUltParent(parent[v]);
    }

    void unionbySize(int u, int v)
    {
        int ult_u = findUltParent(u);
        int ult_v = findUltParent(v);

        if (size[ult_u] < size[ult_v])
        {
            parent[ult_u] = ult_v;
            size[ult_v] += size[ult_u];
        }
        else
        {
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }
};

class Solution
{
public:
    int kruskalsMST(int V, vector<vector<int>> &edges)
    {

        DisjointSet ds(V);

        auto comp = [](vector<int> a, vector<int> b)    // sort on the basis of the wt
        {
            return a[2] < b[2];
        };

        sort(edges.begin(), edges.end(), comp);

        int ans = 0;

        for (auto it : edges)
        {
            int wt = it[2];
            int nd = it[0];
            int adjnode = it[1];

            if (ds.findUltParent(nd) != ds.findUltParent(adjnode))
            {
                ans += wt;
                ds.unionbySize(nd, adjnode);
            }
        }

        return ans;
    }
};