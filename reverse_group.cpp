#include <iostream>
using namespace std;
int group(int arr[],int n,int k)
{
for (int i = 0; i < n; i += k) 
    { 
        int left = i; 
  
        
        int right = min(i + k - 1, n - 1); 
  
        
        while (left < right) 
            swap(arr[left++], arr[right--]); 
  
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    group(arr,n,p);
	    cout<<endl;
	}
}