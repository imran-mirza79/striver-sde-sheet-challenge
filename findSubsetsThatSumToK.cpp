void findRes(int idx, vector<int>& arr, int n, int k, vector<int>& temp, vector<vector<int>>& res){
    if(idx == n){
        if(k==0){
            res.push_back(temp);
        }
        return;
    }
        temp.push_back(arr[idx]);
        findRes(idx+1, arr, n, k-arr[idx], temp, res);
        temp.pop_back();
        findRes(idx+1, arr, n, k, temp, res);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> res;
    vector<int> temp;
    findRes(0, arr, n, k,temp, res);
    // Write your code here.
    return res;
}
