#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	// Write your code here.
   int gap = ceil((float)(n+m)/2);
    while(gap>0){
        int i=0;
        int j = gap;
        while(j<(n+m)){
            if(j<n && arr1[i]>=arr1[j]){
                swap(arr1[i], arr1[j]);
            }else if(j>=n && i<n && arr1[i]>=arr2[j-n]){
                swap(arr1[i], arr2[j-n]);
            }else if(j>=n && i>=n && arr2[i-n]>=arr2[j-n]){
                swap(arr2[i-n], arr2[j-n]);
            }
            i++;
            j++;
        }
        if(gap==1){
            gap=0;
        }else{
            gap=ceil((float)gap/2);
        }
    }
    for(int i=n;i<n+m;i++)
        arr1[i]=arr2[i-n];
    return arr1;
}
