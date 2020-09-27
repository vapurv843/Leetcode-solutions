#include <iostream>
using namespace std;
int trap(int arr[],int n)
{
    int water = 0; 
      
    
    for (int i = 1; i < n-1; i++) { 
          
        
        int left = arr[i]; 
        for (int j=0; j<i; j++) 
           left = max(left, arr[j]); 
          
       
        int right = arr[i]; 
        for (int j=i+1; j<n; j++) 
           right = max(right, arr[j]);  
         
      
       water = water + (min(left, right) - arr[i]);    
    } 
  
    return water;  
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int water = trap(arr,n);
	    cout<<water<<endl;
	}
}