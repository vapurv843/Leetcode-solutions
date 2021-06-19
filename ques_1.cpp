#include<bits/stdc++.h>

using namespace std ;
#define ll long long

int main()
{
   ll t;
   cin>>t;

   while(t--)
   {
       ll q,d;
       cin>>q>>d;
       ll arr[q];
       for(ll i = 1;i<=q;i++)
       {
           cin>>arr[i];
       }
       for(ll i = 1;i<=q;i++)
       {
           cout<<arr[i]<<" ";
       }
   }
}