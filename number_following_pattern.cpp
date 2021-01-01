#include <bits/stdc++.h>
using namespace std;
string solve(string s)

{
    stack<int> st;
    string res;
    for(int i = 0;i<=s.length();i++)
    {
        st.push(i+1);
        if (i == s.length() || s[i] == 'I')
        {
            
            while (!st.empty())
            {
                
                res += to_string(st.top());
                
                st.pop();
            }
        }
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string k= solve(s);
	    cout<<k<<endl;
	}
}