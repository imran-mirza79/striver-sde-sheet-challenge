bool isSafe(vector<vector<int>> &mat, int n, int col, int node, vector<int> &color){
    for(int k=0;k<n;++k){
        if(k!=node && mat[k][node] == 1 && color[k] == col)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>> &mat, int node, vector<int> &color, int m, int n){
    if(node == n){
        return true;
    }
    
    for(int i=1;i<=m;i++){
            if(isSafe(mat, n, i, node, color)){
            color[node] = i;
            if(solve(mat, node+1, color, m, n)) return true;
            color[node]=0;
        }
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    vector<int> color(mat.size(), 0);
    if(solve(mat, 0, color, m, mat.size())) return "YES";
    return "NO";
}
