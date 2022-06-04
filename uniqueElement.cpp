#include <bits/stdc++.h>
int uniqueElement(vector<int> arr, int n)
{
    // Write your code here
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
