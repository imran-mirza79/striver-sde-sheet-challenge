void dfs(vector<vector<int>> &image, int i, int j, int m, int n, int oldColor, int newColor){
    if(i<0 || i>=m || j<0 || j>=n){
        return;
    }
    if(image[i][j]!=oldColor) return;
    image[i][j] = newColor;
    dfs(image, i+1, j, m, n, oldColor, newColor);
    dfs(image, i, j+1, m, n, oldColor, newColor);
    dfs(image, i-1, j, m, n, oldColor, newColor);
    dfs(image, i, j-1, m, n, oldColor, newColor);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    if(newColor == image[x][y])
        return image;
    int oldColor = image[x][y];
    int m = image.size();
    int n =image[0].size();
    dfs(image, x, y, m, n, oldColor, newColor);
    return image;
}
