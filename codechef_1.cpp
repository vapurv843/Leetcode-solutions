#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res = 0;
        int i = 0;
        for( i = 1;i<=9;i++)
        {
            if(n%i==0)
            {
                res = max(res,i);
            }
        }
        cout<<res<<endl;
    }
    
}