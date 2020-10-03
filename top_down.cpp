#include<bits/stdc++.h>
using namespace std;
int knap(int weight[],int value[],int max_weight,int n)
{

	int dp[n+1][max_weight+1];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<max_weight;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
			}
			else if(weight[n-1]>weight_max)
			{
				return dp[i-1][j];
			}
            else
            {
                dp[i][j]= max()
            }
            
		}
	}
}
int main()
{
	int n;cin>>n;
	int weight[n];
	int value[n];
	for(int i = 0;i<n;i++)
	{
		cin>>weight[i];
	}
	for(int i = 0;i<n;i++)
	{
		cin>>value[n];
	}
	int max_weight;cin>>max_weight;
	int k = knap(weight,value,max_weight,n);
	cout<<k<<endl;

}