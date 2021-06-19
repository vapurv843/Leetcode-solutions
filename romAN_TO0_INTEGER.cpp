#include<bits/stdc++.h>
using namespace std ;
int value(char a)
{
    if(a=='I') return 1;
    if(a=='V') return 5;
    if(a=='X') return 10;
    if(a=='L') return 50;
    if(a=='C') return 100;
    if(a=='L') return 500;
    if(a=='M') return 1000;
}
int solve(string s)
{
    int n = s.length();
    int res = 0;
    for(int i = 0;i<n;i++)
    {
        int s1 = value(s[i]);
        if(i+1<n)
        {
            int s2 = value(s[i+1]);
            if(s1>=s2)
            {
                res = res+s1;
            }
        }
    }
}
int main()
{
    string s ;
    cin>>s;
    int n = solve(s);
    cout<<n<<endl;
}