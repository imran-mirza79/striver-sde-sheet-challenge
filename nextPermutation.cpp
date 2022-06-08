#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    if(n==1) return permutation;
    int idx1, idx2;
    vector<int> res(permutation);
    //step-1
    for(idx1=n-2;idx1>=0;idx1--){
        if(res[idx1] < res[idx1+1])
        {
            break;
        }
    }
    if(idx1<0){
        reverse(res.begin(), res.end());
    }else{
         for(idx2=n-1;idx2>idx1;idx2--){
               if(res[idx1]<res[idx2])
              {
                    break;
               }
         }
        swap(res[idx1], res[idx2]);
        reverse(res.begin()+idx1+1, res.end());
    }
    return res;
}
