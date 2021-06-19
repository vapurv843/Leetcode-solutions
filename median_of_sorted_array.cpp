#include<iostream>
using namespace std;
int solve(int arr1[],int arr2[],int m,int n)
{
    int temp[m+n];
    int id = 0;
    for(int i = 0;i<m;i++)
    {
        temp[id]=arr1[i];
        id++;
    }
    for(int j = 0;j<n;j++)
    {
        temp[id]=arr2[j];
        id++;
    }
    for(int i = 0;i<m+n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int arr1[]={1,2,4,5,6,7};
    int arr2[]={9,10,11};
    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);
    int res = solve(arr1,arr2,m,n);
    cout<<res ;
}