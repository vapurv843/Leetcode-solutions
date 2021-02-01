#include<bits/stdc++.h>
using namespace std ;
bool ss(vector<vector<int>> v ,int n, int m , int x)
{
    if(n==0) return 0;
    int small = v[0][0];
    int great = v[n-1][n-1];
    if(x>great and x<small) return 0;
    int i= 0;
    int j = n-1;
    while(i<n and j>=0)
    {
        if(v[i][j]==x) return 1;
        else if(v[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
        
    }
    return 0;
}
int main()
{
    vector<vector<int>> v={{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}};
   int n = v.size();
   int m = v[0].size();
   int x = 36;

   int k= ss(v,n,m,x);
   if(k) cout<<"YES";
   else{
       cout<<"NO";

   }
   
}