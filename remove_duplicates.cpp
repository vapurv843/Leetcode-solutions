class Solution{
public:	
		
	string removeDups(string s) 
	{
	    // Your code goes here
	    int mp[26]={0};
	    string res;
	    for(int i = 0;i<s.length();i++)
	    {
	        if(mp[s[i]-'a']==0)
	        {
	            res+=s[i];
	        }
	        mp[s[i]-'a']++;
	    }
	    return res;
	}
};