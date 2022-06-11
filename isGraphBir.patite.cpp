#include<bits/stdc++.h>
bool bfs(vector<int> edges[], vector<int>& color, int i){
	queue<int> q;
	color[i] = 1;
	q.push(i);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int j: edges[node]){
			if(color[j] == -1){
				color[j] = 1-color[node];
				q.push(j);
			}else if(color[j] == color[node]){
				return false;
			}
		}
	}
	return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
    int n = edges[0].size();
    vector<int> adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(edges[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
	vector<int> color(edges.size(), -1);
	for(int i=0;i<n;i++){
		if(color[i] == -1){
			if(!bfs(adj, color, i))
				return false;
		}
	}
	return true;
}
