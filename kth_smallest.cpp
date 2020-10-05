#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int a,b=0;
        
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i = 0;i<n;i++)
        {
            sum = max(sum,arr[i]+sum);
            if(sum==k)
            a=i;
                break;
            b=i;
        }
        cout<<a<<" "<<b <<endl;
    }
}