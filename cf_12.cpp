#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long long 
int main() {
    long int t;
    cin>>t;
    while(t--)
    {
       long int n,d;
       cin>>n>>d;
       bool ans=0;
       while(n--)
       {
           ans=0;
           long int q;
           cin>>q;
           while(q>0)
           {
               long int temp = q;
               while(temp)
               {
                   if(temp%10==d)
                   ans=1;
                   temp/=10;
               }
               if(ans)
               break ;
               q-=d;
           }
           if(ans)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
    }
	// your code goes here
	return 0;
}