#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    vector<string> v;
	    set<string> st;
	    for(int i=0;i<n;i++)
	    {cin>>s;st.insert(s);}
	    string q;
	    cin>>q;
	    set<string>:: iterator it;
	    for(it=st.begin();it!=st.end();it++)
	    {
	        string z = *it;
	        v.push_back(z);
	    }
	    sort(v.begin(),v.end());
	    
	    
	    for(int i=0;i<q.length();i++)
	    {
	        vector<string> p;
	        for(int j=0;j<v.size();j++)
	        {
	            if(v[j][i] == q[i])
	            p.push_back(v[j]);
	        }
	        if(p.size()==0)
	        cout<<"0";
	        for(int j=0;j<p.size();j++)
	        cout<<p[j]<<" ";
	        cout<<endl;
	        
	        v=p;
	        p.clear();
	    }
	}
	
	return 0;
}