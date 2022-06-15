#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int low=0, high=(m*n)-1;
    while(low<=high){
        int mid = (low+high)/2;
        int x = mat[mid/n][mid%n];
        if(x == target){
            return true;
        }else if(x>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}
