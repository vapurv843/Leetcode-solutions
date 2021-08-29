class Solution {
public:
    int minSwaps(string s) {
        int count  = 0;
        int mx = INT_MIN;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='[')
            {
                count-=1;
            }
            else
            {
                count+=1;
            }
            mx = max(count,mx);
        }
        return (mx+1)/2;
        
              

    }
        
};