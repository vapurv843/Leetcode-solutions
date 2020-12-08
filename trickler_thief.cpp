#include<iostream>
using namespace std ;
int m(int arr[],int n)
{
    int incl = arr[0]; 
  int excl = 0; 
  int excl_new; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     
     excl_new = (incl > excl)? incl: excl; 
  
     
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
  
   
   return ((incl > excl)? incl : excl); 
}
int main()
{
    int t ;
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
        int sum = m(arr,n);
        cout<<sum<<endl;
    }
}