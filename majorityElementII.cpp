#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int check=(int)floor((float)n/3);
//     cout << check << endl;
   map<int, int> mp;
    vector<int> res;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]]>check && find(res.begin(), res.end(), arr[i]) == res.end()){
                        res.push_back(arr[i]);
        }
    }
return res;
}
