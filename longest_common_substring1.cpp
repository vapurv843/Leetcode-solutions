#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int i,int j)
{
    if(i == s1.length() or j == s2.length())
    {
        return 0;
    }
    if(s1[i]==s2[j]) {
        return 1 + lcs(s1,s2,i+1,j+1);
    }
    int oop1 = lcs(s1,s2,i+1,j);
    int oop2 = lcs(s1,s2,i,j+1);
    return max(oop1,oop2);
}
int main()
{
    string s1 = "ABCDE";
    string s2 = "ABDEF";
    int k = lcs(s1,s2,0,0);
    cout<<k<<endl;
}