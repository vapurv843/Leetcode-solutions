#include<bits/stdc++.h>
using namespace std;
int a_sum(int arr[],int size,int t)
{
    int i = 0;
    int sum_ret = 0;
    int mindiff = INT_MAX;
    sort(arr,arr+size);
    while(i<size-2)
    {
        int left = i+1;
        int right = size-1;
        while(right>left)
        {
            int sum = arr[i]+arr[left]+arr[right];
            int diff = abs(sum-t);
            if(diff==0)
                return t;
            if(diff<mindiff)
            {
                mindiff = diff;
                sum_ret = sum;


            }
            if(sum<t)
            {
                left++;
            }
            else
            {
                right++;
            }
            
            


        }
        i++;
    }
    return sum_ret;
}
int main()
{
    int s[]={-1 ,2, 1, -4};
    int t = 1;
    int n = sizeof(s)/sizeof(int);
    cout<<a_sum(s,n,t);
}