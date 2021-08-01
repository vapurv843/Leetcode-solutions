class Solution {
public:
    bool validPalindrome(string s) {
        int l  = s.length();
        if(l<=2) return true;
        int left = 0;
        int right=l-1;
        while(left<=right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                int remove_left = left+1;
                int remove_right = right;
                while(remove_left<=remove_right and s[remove_left ]==s[remove_right])
                {
                    remove_left++;
                    remove_right--;
                }
                if(remove_left>=remove_right) return true;
                
                
                int remove_l = left;
                int remove_r = right-1;
                while(remove_l<=remove_r and s[remove_l]==s[remove_r])
                {
                    remove_l++;
                    remove_r--;
                }
                if(remove_l>=remove_r) return true;
                
                return false;
            }
        }
        return true;
        
    }
};