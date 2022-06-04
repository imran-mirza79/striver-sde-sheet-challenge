int findDuplicate(vector<int> &arr, int n){
    int res;
    int mp[n];
    for(int i=0;i<n;i++) mp[i]=0; 
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]!=0)
        {
            res=arr[i];
            return res;
        }
        mp[arr[i]]++;
    }
    return -1;
}
