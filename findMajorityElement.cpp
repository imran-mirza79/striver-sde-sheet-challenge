#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int count = 0;
    unordered_map<int, int> mp;
    int exp = n/2;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]] > exp){
            return arr[i];
        }
    }
    return -1;
}
