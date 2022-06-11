#include<bits/stdc++.h>
bool isCycle(int node, vector<int>& visited, vector<int> adj[]){
    queue<pair<int, int>> q;
    q.push({node, -1});
    visited[node]=1;
    
    while(!q.empty()){
        int ele = q.front().first;
        int par = q.front().second;
        q.pop();
        
        for(auto it: adj[ele]){
            if(!visited[it]){
                q.push({it, ele});
                visited[it]=1;
            }else if(par!=it){
                return true;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    vector<int> visited(n+1, 0);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if(isCycle(i, visited, adj))
                return "Yes";
        }
    }
    return "No";
}
