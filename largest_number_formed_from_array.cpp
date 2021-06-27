class Solution {
public:
    static int func(string x,string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx)>0?1:0;
}
    string largestNumber(vector<int>& A) {
        string ans="";
    int count =0;
    vector<string> v;
    for(int i = 0;i<A.size();i++)
    {
        
        v.push_back(to_string(A[i]));
    }
    
    sort(v.begin(),v.end(),func);
    for(int i = 0;i<A.size();i++)
    {
        ans = ans+v[i];
    }
    //return ans;
    int i = 0;
    while( i!=A.size())
    {
        if(A[i]==0) count++;
        i++;
    }
    if(count ==A.size())
    {
        ans = "0";
    }
    return ans;
        
    }
};