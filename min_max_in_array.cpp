#include<bits/stdc++.h>
using namespace std ;
class Pair
{
    public:
    int small;
    int large;
};
Pair res(vector<int> &arr,int n)
{
    Pair ans;
    if(n == 1)
    {
        ans.small = arr[0];
        ans.large = arr[0];
    }
   if(arr[0]>arr[1])
   {
       ans.small = arr[1];
       ans.large = arr[0];
   }
   else
   {
       ans.small = arr[0];
       ans.large = arr[1];
   }
   for(int i =2 ;i<n;i++)
   {
       if(arr[i]>ans.large)
       {
           ans.large = arr[i];
       }
       else if(arr[i]<ans.small){
           ans.small = arr[i];
       }

   }
   return ans;
}
int main()
{
    vector<int> a = {1,8,9,3,5,9,0,1,3,88,98,78,65};
    Pair k = res(a,a.size());
    cout<<k.small<<endl;
    cout<<k.large<<endl;
}