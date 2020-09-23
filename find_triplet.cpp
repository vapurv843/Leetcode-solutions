class Solution{
public:	
    int sum = 0;
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    for(int i = 0;i<n-1;i++)
	    {
	        for(int j = i+1;j<n;j++)
	        {
	            if(binary_search(arr,arr+n,arr[i]+arr[j]))
	            {
	                sum++;
	            }
	        }
	    }
	    return sum;
	}
	
};