#include <bits/stdc++.h>
using namespace std;
int cons(vector<int> v,int n)
{
    int res = 0;
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++)
    {
        while(v[i]+1==v[i+1])
        {
            i++;
        }
        res++;
    }
    return res;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n,0);
	    for(int i = 0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	     int k = cons(v,n);
	     cout<<k;
	     cout<<endl;
	}
}