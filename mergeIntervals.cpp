#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    int n=intervals.size();
    for(int i=0;i<n;i++){
        if(res.empty() || res.back()[1]<intervals[i][0]){
            vector<int> v;
            v.push_back(intervals[i][0]);
            v.push_back(intervals[i][1]);
            res.push_back(v);
        }else{
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
    }
    return res;
}
