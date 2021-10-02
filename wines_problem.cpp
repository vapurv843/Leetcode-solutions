#include<bits/stdc++.h>
using namespace std;
int wines(vector<int> w,int L,int R,int Y)
{
    if(L>R)
    {
        return 0;
    }
    int left_include = w[L]*Y + wines(w,L+1,R,Y+1);
    int rigth = w[R]*Y + wines(w,L,R-1,Y+1);
    return max(left_include,rigth);
}
int main()
{
    vector<int> w = {2,3,5,1,4};
    int n = w.size();
    int ans = wines(w,0,n-1,1);
    cout<<ans<<endl;
}