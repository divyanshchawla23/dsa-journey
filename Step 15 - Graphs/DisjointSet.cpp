#include <iostream>
using namespace std;

class DisjointSet
{

    vector<int> size;
    vector<int> parent;

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

    int findUltimateParent(int v)
    {

        if (v == parent[v])
        {
            return v;
        }
        return parent[v] = findUltimateParent(parent[v]);
    }

    void unionbySize(int u, int v)
    {

        int ult_u = findUltimateParent(u);
        int ult_v = findUltimateParent(v);

        if (ult_u == ult_v)
        {
            return;
        }

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

int main()
{
    DisjointSet ds(7);
    ds.unionbySize(1, 2);
    ds.unionbySize(2, 3);
    ds.unionbySize(4, 5);
    ds.unionbySize(6, 7);
    ds.unionbySize(5, 6);

    // if 3 and 7 same or not
    if (ds.findUltimateParent(3) == ds.findUltimateParent(7))
    {
        cout << "Same\n";
    }else{
        cout << "Not same\n";
    }

    ds.unionbySize(3, 7);

    if (ds.findUltimateParent(3) == ds.findUltimateParent(7))
    {
        cout << "Same\n";
    }else{
        cout << "Not same\n";
    }
    
    return 0;
}