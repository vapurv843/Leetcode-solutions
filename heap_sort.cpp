#include<bits/stdc++.h>
using namespace std;
int closet(int arr[],int n,int x,int k)
{
     priority_queue<pair<int,int >> p;
     for(int i = 0;i<n;i++)
     {
         p.push(make_pair(abs(arr[i]-x),arr[i]));
         if(p.size()>k)
         {
             p.pop();
         }
     }
     while(p.size()>0)
     {
         cout<<p.top().second<<" ";
         p.pop();
     }



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
    int k = 3;
    int x =7;
    closet(arr,n,x,k);
}