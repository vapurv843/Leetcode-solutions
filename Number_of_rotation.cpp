class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int start = 0;
	    int end = n-1;
	    
	    while(start<=end)
	    {
	        if(arr[start]<=arr[end])
return start;
	        int mid = start+(end-start)/2;
	        int prev= (mid+n-1)%n;
int next= (mid+1)%n;

if(arr[prev]>=arr[mid] && arr[next]>=arr[mid])
return mid;

if(arr[start]<=arr[mid])
start= mid+1;

else if(arr[end]>=arr[mid])
end= mid-1;

}

return -1;
}
	    
	

};