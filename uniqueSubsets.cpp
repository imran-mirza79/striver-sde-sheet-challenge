#include<bits/stdc++.h>

void solve(vector<int> &arr, vector<int> temp, set<vector<int>> &res, int n, int i){
    if(i == n){
        sort(temp.begin(),temp.end());
        res.insert(temp);
        return;
    }
    temp.push_back(arr[i]);
    solve(arr, temp, res, n, i+1);
    temp.pop_back();
    solve(arr, temp, res, n, i+1);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int> temp;
    set<vector<int>> res;
    solve(arr, temp, res, n, 0);
    vector<vector<int>> r;
   for(auto it=res.begin();it!=res.end();it++){
       r.push_back(*it);
   }
    return r;
}
