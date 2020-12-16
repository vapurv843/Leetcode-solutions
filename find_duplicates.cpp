#include <bits/stdc++.h>
using namespace std;
int count(vector<int> arr)
{
    unordered_map<int,int> mp;
    for(int i = 0;i<10;i++)
    {
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second==5)
        {
            return  x.first;
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    vector<int> arr(10);
	    for(int i = 0;i<10;i++)
	    {
	        cin>>arr[i];
	    }
	    int k = count(arr);
	    cout<<k;
	    cout<<endl;
	}
}