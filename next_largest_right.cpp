#include<bits/stdc++.h>
using namespace std;
void gre(int arr[],int n)
{
    vector<int> v;
    stack<int> s;
    for(int i = n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto i :v)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    gre(arr,n);
    cout<<endl;
}