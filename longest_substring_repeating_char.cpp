#include<bits/stdc++.h>
using namespace std ;
bool solve(int i,int j,string str)
    {
       vector<bool> visited(26); 
  
    for (int p = i; p <= j; p++) { 
        if (visited[str[p] - 'a'] == true) 
            return false; 
        visited[str[p] - 'a'] = true; 
    } 
    return true; 
    }
int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int res = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = i;j<n;j++)
            {
                if(solve(i,j,s))
                {
                    res = max(res,j-i+1);
                }
            }
        }
        return res;
        
    }
    int main()
    {
        string s = "abcabcbb";
        int k =lengthOfLongestSubstring( s);
        cout<<k<<endl;

    }