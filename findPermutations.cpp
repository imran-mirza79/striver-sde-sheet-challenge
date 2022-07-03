void solve(vector<string> &res,string &s, int index){
    if(index == s.size()){
        res.push_back(s);
        return;
    }
    
    for(int i=index;i<s.size();++i){
        swap(s[index], s[i]);
        solve(res, s, index+1);
        swap(s[i], s[index]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> res;
    solve(res, s, 0);
    return res;
}
