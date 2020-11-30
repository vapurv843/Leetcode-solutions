#include<iostream>
using namespace std;
int step(int n)
{
    if(n==1 || n==0) return 1;
    if(n==2) return 2;
     return step(n-1)+step(n-2)+step(n-3);
    
}
int main()
{
    int n ;
    cin>>n;
    int k = step(n);
    cout<<k<<endl;
}