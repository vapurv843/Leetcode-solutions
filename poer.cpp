#include<iostream>
using namespace std;
void pw(int a)
{
    if(a==0) return ;
    
    pw(a-1);
    cout<<a<<" ";
}
int main()

{
    int a=3;
    pw(3);
}