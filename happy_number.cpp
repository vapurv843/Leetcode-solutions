class Solution {
public:
    int sum(int n)
    {
        int res = 0;
        while(n)
        {
            int rem = n%10;
            res+=rem*rem;
            n=n/10;
            
        }
        return res;
    }
    bool isHappy(int n) {
        set<int> st;
    while (1)
    {
        n = sum(n);
        if (n == 1)
            return true;
        if (st.find(n) != st.end())
            return false;
        st.insert(n);
    }
        
        
    }
};