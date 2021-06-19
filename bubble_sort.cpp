#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int arr[]={2,6,4,2,1};
    int n = sizeof(arr)/sizeof(int); 
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}