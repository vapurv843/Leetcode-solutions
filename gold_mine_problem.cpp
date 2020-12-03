#include<bits/stdc++.h>
using namespace std;

int getMaxGold(vector<vector<int>> arr,int m,int n)
{
    int dp[m][n];
    memset(dp,0,sizeof(dp));
    for(int j = arr[0].size()-1;j>=0;j--)
    {
        for(int i=arr.size()-1;i>=0;i--)
        {
            if (j == arr[0].size() - 1) {
               dp[i][j] = arr[i][j];
            } else if (i == arr.size() - 1) {
               dp[i][j] = arr[i][j] +max(dp[i][j + 1], dp[i - 1][j + 1]);
            } else if (i == 0) {
               dp[i][j] = arr[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
            } else {
               dp[i][j] = arr[i][j] + max(dp[i][j + 1], max(dp[i + 1][j + 1], dp[i - 1][j + 1]));
            }
            
            
        }
    }
    int mx = dp[0][0];
    for(int i = 1;i<m;i++)
    {
        mx = max(dp[i][0],mx);
    }
    return mx;
}
int main() 
{ 
     vector<vector<int>> v = { {1, 3, 1, 5}, 
        {2, 2, 4, 1}, 
        {5, 0, 2, 3}, 
        {0, 6, 1, 2} 
    }; 
    int m =v.size();
    int n = v[0].size();
    cout << getMaxGold(v, m, n); 
    return 0; 
} 