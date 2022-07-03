#include<bits/stdc++.h>
bool isPalindrome(string &s, int start, int end){
    while(start<=end){
        if(s[start++]!=s[end--])
            return false;
    }
    return true;
}
void solve(string &s, vector<string> &temp, vector<vector<string>> &res, int i){
    if(i == s.size()){
        res.push_back(temp);
        return;
    }
    
    for(int j=i;j<s.length();++j){
        if(isPalindrome(s, i, j)){
            temp.push_back(s.substr(i, j-i+1));
            solve(s, temp, res, j+1);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string> temp;
    vector<vector<string>> res;
    solve(s, temp, res, 0);
    return res;
}
