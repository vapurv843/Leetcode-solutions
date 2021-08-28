#include <bits/stdc++.h>
using namespace std;
void solve() { 
 int n, ans = 0; 
 cin >> n; 
 vector<int> a(n); 
 for(auto &it: a) 
  cin >> it; 
 stack<int> s; 
 for(int i = n - 1; i > 0; i--) 
  if(!s.size() || a[i] > a[s.top()]) 
   s.push(i); 
 vector<int> jump; 
 int pos = 0; 
 while(pos != n - 1) { 
  if(a[pos] >= a[s.top()]) { 
   jump.push_back(a[s.top()]); 
   pos = s.top(); 
   s.pop(); 
  } 
  else { 
   cout << "-1\n"; 
   return; 
  } 
 } 
 cout << jump.size() << '\n'; 
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}
