#include<iostream>
#include<algorithm>
using namespace std;
int count(int arr[],int dep[],int n)
{
    sort(arr, arr + n); 
    sort(dep, dep + n); 
  

    int count = 1, result = 1; 
    int i = 1, j = 0; 
  
    
    while (i < n && j < n) { 
        
        if (arr[i] <= dep[j]) { 
            count++; 
            i++; 
        } 
  
        
        else if (arr[i] > dep[j]) { 
            count--; 
            j++; 
        } 
  
        
        if (count > result) 
            result =count; 
    } 
  
    return result;
     
    
  
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int dept[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
            cin>>dept[i];
        }
        for(int i = 0;i<n;i++)
        {
            //cin>>arr[i];
            cin>>dept[i];
        }
        int k = count(arr,dept,n);
        cout<<k;
        cout<<endl;
    }
    
}