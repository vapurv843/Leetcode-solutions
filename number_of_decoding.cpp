#include <bits/stdc++.h>
using namespace std;
int count(char *digits,int n)
{
    
    int count[n+1];  
    count[0] = 1; 
    count[1] = 1; 
    
    if(digits[0]=='0')   
         return 0; 
    for (int i = 2; i <= n; i++) 
    { 
        count[i] = 0; 
  
        
        if (digits[i-1] > '0') 
            count[i] = count[i-1]; 
  
        a
        if (digits[i-2] == '1' ||  
              (digits[i-2] == '2' && digits[i-1] < '7') ) 
            count[i] += count[i-2]; 
    } 
    return count[n]; 
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char s[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    int t = count(s,n);
	    cout<<t<<endl;
	}
}