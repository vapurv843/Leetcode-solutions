class Solution {
public:
    string reversePrefix(string word, char ch) {
        int res = -1;
        for(int i = 0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                res = i;
                break;
            }
        }
        if(res == -1)
        {
            return word;
        }
       reverse(word.begin(),word.begin()+res+1);
        return word;
        
        
    }
};