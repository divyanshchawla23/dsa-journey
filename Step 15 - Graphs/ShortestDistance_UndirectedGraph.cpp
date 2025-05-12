#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int V = adj.size();
        vector<int> dis(V,INT_MAX);
        dis[src]=0;
        
        queue<pair<int,int>>q;
        q.push({src,0});
        
        while(!q.empty()){
            int node = q.front().first;
            int d = q.front().second;
            q.pop();
            
            for(auto it : adj[node]){
                if(d+1<dis[it]){
                    dis[it]= d+1;
                    q.push({it,d+1});
                }
            }
            
        }
        
        for(auto &it: dis){
            if (it == INT_MAX){
                it = -1;
            }
        }
        
        return dis;
    }
};