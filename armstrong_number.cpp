#include<bits/stdc++.h>
using namespace std ;
int raise(int x,int y)
{
    if(y==0) return 1;
    if(y%2==0)
    {
        return raise(x,y/2)*raise(x,y/2);
    }
    return x*raise(x,y/2)*raise(x,y/2);
}
int numbers(int n)
{
    int count =0;
    while(n)
    {
        count++;
        n=n/10;
    }
    return count;
}
bool isarm(int n)
{
    int original=n;
    int k = numbers(n);
    int sum = 0;
    int rem = 0;
    while(n)
    {
        rem=n%10;
        sum+=raise(rem,k);
        n=n/10;
    }
    if(original==sum)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    if(isarm(n))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}