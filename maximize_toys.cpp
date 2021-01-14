class Solution{
public:
    int toyCount(int n, int k, int arr[])
    {
        sort(arr,arr+n);
        int count =0;
        for(int i = 0;i<n;i++)
        {
            k=k-arr[i];
            if(k>=0) count++;
        }
        return count;
    }
};