void sort012(int *arr, int n)
{
   //   Write your code here
    int left=0,right=n-1,mid=0;
    while(mid<=right)
    {
        if(arr[mid]==0)
        {
            int temp = arr[left];
            arr[left]=arr[mid];
            arr[mid]=temp;
            left++;
            mid++;
        }
        
        else if(arr[mid]==1)
        {
            mid+=1;
        }else{
            int temp = arr[mid];
            arr[mid] = arr[right];
            arr[right]=temp;
            right-=1;
        }
    }
}
