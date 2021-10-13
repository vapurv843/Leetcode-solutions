#include<bits/stdc++.h>
using namespace std; 
string spell[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void PrintSpell(int n)
{
    if(n==0) return ;
    int last = n%10;
    PrintSpell(n/10);
    cout<<spell[last]<<" ";
}
int main()
{
    int n ;
    cin>>n;
    PrintSpell(n);
}