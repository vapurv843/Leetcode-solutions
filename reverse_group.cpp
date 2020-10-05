#include <iostream>
#include<algorithm>

using namespace std;
int small(int arr[],int n,int k)
{
    sort(arr,arr+n);  
//2
//6
//7 10 4 3 20 15
//3
//5
//7 10 4 20 15
//4
    return arr[k-1];
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        int s = small(arr,n,k);
        cout<<s;
        cout<<endl;
    }
}