class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    map<char,int > mp;
	    mp['!']=1;
	    mp['#']=1;
	    mp['$']=1;
	    mp['%']=1;
	    mp['&']=1;
	    mp['*']=1;
	    mp['@']=1;
	    mp['^']=1;
	    mp['~']=1;
	    for(int i = 0;i<n;i++)
	    {
	        mp[nuts[i]]++;
	    }
	    int i= 0;
	    for(auto s:mp)
	    {
	        if(s.second>1)
	        {
	            nuts[i]=s.first;
	            bolts[i]=s.first;
	            i++;
	        }
	    }
	}

};