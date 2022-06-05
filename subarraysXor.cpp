#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int xorr = 0;
    int cnt = 0;
    int n = arr.size();
    map<int, int> mp;
    
    for(int i=0;i<n;i++)
    {
        xorr = xorr ^ arr[i];
        int y = xorr^x;
        if(mp.find(y) != mp.end())
            cnt+=mp[y];
        if(xorr==x)
            cnt+=1;
        if(mp.find(xorr) == mp.end())
            mp[xorr]=1;
        else
            mp[xorr]+=1;
    }
    return cnt;
}
