#include<bits/stdc++.h>
using namespace std; 
bool isSorted(int v[],int n){
    if(n==0 or n==1) {
        return true;
    }
    if(v[0]<v[1] and isSorted(v+1,n-1))
    {
        return true; 
    }
    return false;
}
int main()
{
    int v[] = {1,2,3,5,6,7,8,9,10,11,12,13};
    int n = sizeof(v)/sizeof(v[0]);
    cout<<isSorted(v,n)<<endl;
}