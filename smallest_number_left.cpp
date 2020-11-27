#include<bits/stdc++.h>
using namespace std;
void sml(int arr[],int n)
{
    stack<int> s;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        while(!s.empty() && s.top()>=arr[i])
        {
            s.pop();
        }
        if(s.empty()) v.push_back(-1);
        else
        {
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    for(auto i :v)
    {
        cout<<i<<" ";
    }
}
int main()
{
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
        sml(arr,n);
        cout<<endl;
    }
}