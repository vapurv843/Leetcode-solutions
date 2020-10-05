#include<iostream>
using namespace std;
int count(int arr[],int n,int sum)
{
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int k = count(arr,n,sum);
    cout<<k<<endl;
}