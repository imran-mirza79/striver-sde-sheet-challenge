#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<int>> res;
        res.push_back({1});
        if(numRows==1) return res;
        res.push_back({1,1});
        for(int i=0;i<numRows-2;i++) 
        {
            vector<int> prevTemp = res.back();
            vector<int> curTemp;
            curTemp.push_back(1);
            for(int j=1;j<prevTemp.size();j++) {
                curTemp.push_back(prevTemp[j]+prevTemp[j-1]);
            }
            curTemp.push_back(1);
            res.push_back(curTemp);
        }
        return res;
}
