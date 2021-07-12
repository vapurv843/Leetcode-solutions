class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string res = "";
        int i = num1.length()-1;
        int j = num2.length()-1;
        while(i>=0 or j>=0 )
        {
            int k = i>=0?num1[i]-'0':0;
            int l = j>=0?num2[j]-'0':0;
            int m = (k+l+carry)%10;
            
            carry = (k+l+carry)/10;
            res+=to_string(m);
            
            i--;
            j--;
        }
        if(carry!=0)
        {
            res+=to_string(carry);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};