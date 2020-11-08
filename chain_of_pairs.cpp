int Solution::solve(vector<vector<int> > &A) {
    vector<int> v(A.size(),1);
int i,j,res=INT_MIN;
for(i=1;i<A.size();i++)
{
for(j=0;j<i;j++)
{
if(A[j][1]<A[i][0])
{
v[i]=max(v[i],v[j]+1);
}
}
res=max(res,v[i]);
}
return res;
}
