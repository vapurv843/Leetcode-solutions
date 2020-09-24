class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    int c=n,sr=0,i=0,j=0;
	    while(c-- && i<n && j<m)
	    {
	        if(a[i]<b[j])
	        i++;
	        else if(a[i]>=b[j])
	        {
	            sr++;
	            j++;
	        }
	        
	    }
	    for(i=0;i<sr;i++)
	    swap(b[i],a[n-i-1]);
	    sort(a,a+n);
	    sort(b,b+m);
	}
};