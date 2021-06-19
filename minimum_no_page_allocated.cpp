#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res = n*n*n;
        if(res%2==0)
        {
            cout<<"Mike"<<endl;
        }
        else
        {
            cout<<"Harvey"<<endl;
        }
    }
}