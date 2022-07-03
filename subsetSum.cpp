void solve(vector<int> &num, vector<int> &res, int i, int sum, int n){
    if(i==n){
        res.push_back(sum);
        return;
    }
    solve(num, res, i+1, num[i]+sum, n);
    solve(num, res, i+1, sum, n);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> res;
    solve(num, res, 0, 0, num.size());
    sort(res.begin(), res.end());
    return res;
}
