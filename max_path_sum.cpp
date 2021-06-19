#include<bits/stdc++.h>
using namespace std;

int max_path_sum(int A[], int B[], int l1, int l2)
{

    
    int i = 0, j = 0;
    int sum1 =0, sum2 =0, sum =0;
    while( i < l1 && j < l2){
      
     if( i < l1 and A[i] < B[j]){
          sum1 += A[i++];
          
        
          
      }
      
      if(j < l2 and B[j] < A[i]){
          sum2 += B[j++];
      
          
      }
      
      if(A[i] == B[j]){
          sum1 += A[i++];
          sum2 += B[j++];
       
          if( sum1 == sum2) sum+= sum1;
          else sum += max(sum1, sum2);
          
       
          sum1 = 0;
          sum2 =0;
      }
  }
  
  while( i < l1){
      sum1 += A[i++];
  }
  
  while( j < l2){
      sum2 += B[j++];
  }
  
  sum += max(sum1, sum2);
  return sum;

    
}
int main()
{
    int arr[]={2,3,7,10,12};
    int arr2[]={1,5,7,8};
    int n1 = sizeof(arr)/sizeof(int);
    int n2 = sizeof(arr)/sizeof(n2);
    int k =  max_path_sum(arr,arr2,n1,n2);
    cout<<k<<endl;
}