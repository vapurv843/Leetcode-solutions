int Solution::solve(vector<int> &A, int B) {
    int count=0;
    map<int,int> m;
    for(int i = 0;i<A.size();i++)
    {
        if(m.find(B^A[i])!=m.end())
        {
            count++;
        }
        m[A[i]]++;
    }
    return count;
}
