#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
   pair<int, int> res;
    int mp[n+1]={0};
    for(int i=1;i<=n;i++){
        mp[arr[i-1]]++;
          if(mp[arr[i-1]]>1)
            res.second = arr[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
            res.first=i;
    }
    return res;
}
