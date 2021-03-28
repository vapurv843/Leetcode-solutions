#include<bits/stdc++.h>
using namespace std ;
int solve(string s)
{
    int n = s.length();
    int count = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            break;
        }
        else
        {
            count++;
        }
        

    }
    return count;
}
int main()
{
    string s ;
    getline(cin,s);
    int k  = solve(s);
    cout<<k<<endl;


}