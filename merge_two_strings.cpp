#include<bits/stdc++.h>
using namespace std;
string mergeTwoStrings(string str1, string str2)
{
    string res;
    
    int i = 0, j = 0, index = 0;
    
    while(i < str1.size() and j < str2.size())
    {
        if(index % 2 == 0)
        {
            res += str1[i++];
        }
        else
        {
            res += str2[j++];
        }
        
        index++;
    }
    
    while(i < str1.size())
    {
        res += str1[i++];
    }
    
    while(j < str2.size())
    {
        res += str2[j++];
    }
    
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        string k = mergeTwoStrings(s1,s2);
        cout<<k<<endl;
        
    }
}