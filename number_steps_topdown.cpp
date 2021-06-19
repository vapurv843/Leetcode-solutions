#include<bits/stdc++.h>
using namespace std;

int step(int n)
{
   int dp[n+1];
   dp[0]=1;
   for(int i =n-1 ;i>=0;i--)
   {
       if(i==1) 
       {
           dp[i]= dp[i-1];
       }
       else if(i==2)
       {
           dp[i]= dp[i-1]+dp[i-2];
       }
       else
       {
           dp[i]= dp[i-1]+dp[i-2]+dp[i-3];

       }
       
       
   }
   return dp[n];
    
}
int main()
{

    
    int n ;
    cin>>n;
    int k = step(n);
    cout<<k<<endl;
}