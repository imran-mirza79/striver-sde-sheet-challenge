#include <bits/stdc++.h> 
long long merge(long long* arr, long long t[], long long left, long long mid, long long right){
    long i=left;
    long j=mid;
    long k=left;
    long inv_count=0;
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            t[k++] = arr[i++];
        }else{
            t[k++] = arr[j++];
            inv_count= inv_count + (mid-i);
        }
    }
    while(i<=mid-1){
        t[k++] = arr[i++];
    }
    while(j<=right){
        t[k++] = arr[j++];
    }
    for(i=left;i<=right;i++)
        arr[i]=t[i];
    return inv_count;
}
long long mergeSort(long long* arr,long long t[], long long left, long long right){
    long long mid, inv_count=0;
    if(right>left){
        mid = (right+left)/2;
        inv_count+= mergeSort(arr, t, left, mid);
        inv_count+= mergeSort(arr, t, mid+1, right);
        inv_count+= merge(arr, t, left, mid+1, right);
    }
    return inv_count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long t[n];
    long long res = mergeSort(arr, t, 0, n-1);
    return res;
}
