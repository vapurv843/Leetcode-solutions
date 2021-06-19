#include<iostream>
using namespace std ;
void sort012(int a[], int n)
{
    int count_0,count_1,count_2=0;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]==0) count_0++;
        if(a[i]==1) count_1++;
        if(a[i]==2) count_2++;
    }
    for(int i=0;i<count_0;i++)
    {
        a[count++]=0;
    }
    for(int i = count;i<count_1;i++)
    {
        a[count++]=1;
    }
    for(int i = count;i<count_2;i++)
    {
        a[count++]=2;
    }
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int arr[]={0,2,1,2,0,1,1};
    int n = sizeof(arr)/sizeof(int);
    sort012(arr,n);

}