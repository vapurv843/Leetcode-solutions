#include<iostream>
using namespace std;
int solve(int n)
{
    int start = 1;
    int end = n;
    int ans = 0;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid>n)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n ;
    cin>>n;
    int k = solve(n);
    cout<<k;
}