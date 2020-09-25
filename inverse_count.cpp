#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n) 
{ 
    
    multiset<int> set1; 
    set1.insert(arr[0]); 
  
    int invcount = 0; 
  
    multiset<int>::iterator itset1; 
  
    
    for (int i=1; i<n; i++) 
    { 
        
        set1.insert(arr[i]); 
  
        
        itset1 = set1.upper_bound(arr[i]); 
  
    
        invcount += distance(itset1, set1.end()); 
    } 
  
    return invcount; 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k = count(arr,n);
        cout<<k;
        cout<<endl;
        
    }
}