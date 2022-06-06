#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int res = 0;
    unordered_map<int, int> mp;
    int sum=0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            res = i+1;
        }
        if(mp.find(sum) != mp.end()){
            res = max(res, i - mp[sum]);
        }else{
            mp[sum] = i;
        }
    }
    return res;

}
