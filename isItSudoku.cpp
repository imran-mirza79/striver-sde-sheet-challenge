bool isValid(int mat[][9], int row, int col, int c){
    for(int i=0;i<9;i++){
        if(mat[row][i] == c)
            return false;
        if(mat[i][col] == c)
            return false;
        if (mat[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
             return false;
    }
    return true;
}

bool solve(int mat[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(mat[i][j] == 0){
                for(int k=1;k<=9;k++){
                    if(isValid(mat,i, j, k)){
                        mat[i][j] = k;
                        if(solve(mat))
                            return true;
                        else
                            mat[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    return solve(matrix);
        
}
