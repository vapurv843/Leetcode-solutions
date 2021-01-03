class Solution {
public:
    void swap(char &a,char &b)
    {
        char temp = a;
        a=b;
        b=temp;
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        //return s;
        
    }
};