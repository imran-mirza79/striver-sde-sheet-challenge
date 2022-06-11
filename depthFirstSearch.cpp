void dfsUtil(vector<vector<int>>& adj, int node, vector<vector<int>>& res, vector<int>& visited, vector<int>& temp){
    temp.push_back(node);
    visited[node] = true;
    for(int child: adj[node]){
        if(!visited[child])
            dfsUtil(adj, child, res, visited, temp);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> adj(V, vector<int>(0));
    for(int i=0;i<E;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> visited(V, false);
    vector<vector<int>> res;
    vector<int> temp;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfsUtil(adj, i, res, visited, temp);
            res.push_back(temp);
            temp.clear();
        }
    }
    return res;
}
