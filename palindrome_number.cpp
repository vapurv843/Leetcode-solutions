class Solution {
public:
    long long int ne=0;
    bool isPalindrome(int x) {
        int k = x;
        if(x<0)
        {
            return
        }
            
        else
        {
            while(x!=0)
            {
            int k = x%10;
            ne = ne*10+k;
            x = x/10;
            }
            if(ne==k)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    }
};
