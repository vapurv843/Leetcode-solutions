#include<iostream>
using namespace std;
int count(int arr[],int dep[],int n)
{
    int count = 1, result = 1; 
    int i = 1, j = 0; 
  
    
    for (int i = 0; i < n; i++) { 
        
        count = 1; 
  
        for (int j = i + 1; j < n; j++) { 
            
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||  
           (arr[j] >= arr[i] && arr[j] <= dep[i])) 
                count++; 
        } 
  
        
        result = max(result, count); 
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
        int k = count(arr,dept,n);
        cout<<k;
        cout<<endl;
    }
    
}