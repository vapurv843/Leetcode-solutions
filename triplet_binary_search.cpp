class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    sort(arr,arr+n);
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = i+1;j<n;j++)
	        {
	            if(binary_search(arr,arr+n,sqrt(arr[i]*arr[i]+arr[j]*arr[j])))
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
};
