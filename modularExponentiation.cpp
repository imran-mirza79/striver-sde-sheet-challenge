#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long xx = x;
    long res=1;
    while(n>0){
        if(n%2==0){
            xx = (xx%m * xx%m)%m;
            n/=2;
        }else{
            res = (res*xx%m)%m;
            n-=1;
        }
    }
    return (int)(res%m);
}
