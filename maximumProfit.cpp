#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minPrice=INT_MAX;
    int res=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        minPrice=min(minPrice, prices[i]);
        res=max(res, prices[i]-minPrice);
    }
    return res;
}
