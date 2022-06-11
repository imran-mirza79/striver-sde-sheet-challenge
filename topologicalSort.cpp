#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int> indegree(v, 0);
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    
    for(int i=0;i<v;i++){
        for(auto j: adj[i])
            indegree[j]++;
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    vector<int> res;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        res.push_back(node);
        for(int it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)
                q.push(it);
        }
    }
    return res;
}
