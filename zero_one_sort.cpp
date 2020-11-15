#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int zero(int arr[],int n)
{
    int count_zero=0;
    int count_one = 0;
    int count_two=0;
    int a[n];
    int i = 0;
    for(int i =0;i<n;i++ )
    {
        if(arr[i]==0) count_zero++;
        if(arr[i]==1) count_one++;
        if(arr[i]==2) count_two++;
        
    }
    while(count_zero>0)
    {
        arr[i++]=0;
        
    }
    while(count_one>0)
    {
        arr[i++]=1;
        count_one--;
    }
    while(count_two>0)
    {
        arr[i++]=2;
        count_two--;
        
    }
}
int main()
{
    int t;
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
        zero(arr,n);
        print(arr,n);
        cout<<endl;
    }
}
