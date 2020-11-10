class Solution {
public:
    bool arepair(char open,char close)
    {
        if(open=='(' && close == ')') return true;
        if(open == '{' && close == '}') return true;
        if(open == '[' && close == ']') return true;
        return false;
        
    }
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0;i<n;i++)
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
                
                {
                    if(st.empty())
                    {
                        return false;
                    }
                    if(arepair(st.top(),s[i]))
                        st.pop();
                    else
                        return false;
                    
                } 
        return st.empty()?true:false;
        
    }
};