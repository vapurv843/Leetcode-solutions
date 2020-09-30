#include<iostream>
using namespace std;
int knapsack(int value[],int weight[],int n,int weight_max)
{
	if(n==0 || weight_max==0) return 0;
	if(weight[n-1]>weight_max)
	{
		return knapsack(value,weight,n-1,weight_max);
	}
	if(weight[n-1]<=weight_max)
	{
		return max(value[n-1]+knapsack(value,weight,n-1,weight_max-weight[n-1]),knapsack(value,weight,n-1,weight_max));
	}
}
int main()
{
	int n;
	cin>>n;
	int value[n];
	int weight[n];
	int weight_max = 50;
	for(int i = 0;i<n;i++)
	{
		cin>>value[i];
	}
	for(int i = 0;i<n;i++)
	{
		cin>>weight[i];
	}
	int k = knapsack(value,weight,n,weight_max);
	cout<<k<<endl;
}