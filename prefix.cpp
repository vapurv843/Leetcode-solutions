string temp(string a,string b)
{
    string ans;
    int n1 = a.length();
    int n2 = b.length();
    for(int i=0,j=0;i<=n1-1&&j<=n2-1;i++,j++)
    {
        if(a[i]!=b[j])
            break;
        ans.push_back(a[i]);
    }
    return ans;
}



string Solution::longestCommonPrefix(vector<string> &A) {
    int n = A.size();
    string prefix =A[0];
    for(int i = 1;i<=n-1;i++)
    {
        prefix = temp(prefix,A[i]);
    }
    return prefix;
}
