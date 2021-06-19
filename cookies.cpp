#include<bits/stdc++.h>
using namespace std;

int max_path_sum(int A[], int B[], int l1, int l2)
{

    //Your code here
    int res=0;
    int sum1 = 0;
    int sum2=0;
    int i = 0;
    int j = 0;
    while(i<l2 and j<l2)
    {
        if(A[i]<B[j])
        {
            sum1+=A[i++];
            
        }
        else if(A[i]>B[j])
        {
            sum2+=B[j++];
            
        }
        else
        {
          sum1 += A[i++];
          sum2 += B[j++];
       
          if( sum1 == sum2)
          {
              res += sum1;
          }
          else res += max(sum1, sum2);
          
       
          sum1 = 0;
          sum2 =0;
        }
    }
 
    
    while (i < l1)
        sum1 += A[i++];
 
    
    while (j < l2)
        sum2 += B[j++];
 
    
    res+= max(sum1, sum2);
 
    return res;
    
        
    
    
}
int main()
{
    int l1,l2;
    cin>>l1>>l2;
    int arr1[l1],arr2[l2];
    for(int i = 0;i<l1;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<l2;i++)
    {
        cin>>arr2[i];
    }
    
}