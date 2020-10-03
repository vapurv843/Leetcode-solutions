#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i = 0;i<n+1;i++)
    {
        for(int j = 0;j<sum+1;j++)
        {
            if(i==0)
            {
                dp[i][j]=false;

            }
            if(j==0)
            {
                dp[i][j]=true;
            }
        }
    }
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= sum; j++) 
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                               
            }
            else
            {
                if (j < arr[i - 1]) 
                dp[i][j] = dp[i - 1][j]; 
            }
            
        }
    }
    return dp[n][sum];
}
int main()
{
      int n=5;
      //cin>>n;
      int arr[5]={1,2,3,9,51};
      
      int sum=20 ;
      //cin>>sum;
      if(subset(arr,n,sum))
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NP";
      }
      
      
}