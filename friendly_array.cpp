public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
        //code here.
        //int n = sizeof(arr)/sizeof(int);
        sort(arr,arr+n);
        int sum = 0;
        sum+=abs(arr[0]-arr[1]);
        sum+=abs(arr[n-1]-arr[n-2]);
        for(int i = 1;i<n-1;i++)
        {
            sum+=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
            
        }
        return sum;
    }