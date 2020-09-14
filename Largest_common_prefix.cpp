string Solution::longestCommonPrefix(vector<string> &A) {
    string result = "";
    auto n = A.size();
    int j = INT_MAX;
    for (auto i = 0; i<n; ++i)
    {
        auto s = A[i].length();
        if (j > s)
            j = s;
    }
    
    for (auto i = 0; i<j; ++i)
    {
        auto temp = A[0][i];
        int k = 1;
        while (k<n)
        {
            if (temp==A[k][i])
                ++k;
            else
                return result;
        }
        result += temp; 
    }
    return result;
}
