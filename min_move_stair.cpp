#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1,2,3},{11,22,33},{111,222,3333},{5,4,3}};
    int m = v.size();
    int n = v[0].size();
   v[0][0]=900;
   for(int i = 1;i<m;i++)
   {
       v[i][0]=44;
   }
   for(int i = 0;i<m;i++)
   {
       cout<<v[i][0]<<" ";
   }
    
}