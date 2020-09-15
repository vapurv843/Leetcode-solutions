int Solution::strStr(const string A, const string B) {
    if(A.find(B)!=string::npos)
{int ans=A.find(B);
return ans;
}
return -1;
}

