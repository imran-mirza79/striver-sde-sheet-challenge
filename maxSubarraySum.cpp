#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    if(n==0){
        return 0;
    }
    if(n==1){
        return (long long)arr[0];
    }
    long long int res=0;
    long long int max_sf = arr[0];
    long long int max_eh = 0;
    if(f==n) return 0;
    for(int i=0;i<n;i++){
        max_eh+=arr[i];
        if(max_eh>max_sf){
            max_sf = max_eh;
        }
        if(max_eh<0){
            max_eh=0;
        }
    }
    return max_sf;
}
