

int Solution::solve(string s) {
    long int count=0;
    long int x=0;
    
    unordered_map<char,int>m={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1},{'A',1},{'E',1},{'O',1},{'I',1},{'U',1}};
    
    
    for(long int i=s.size()-1;i>=0;i--)
    {
        x++;
        if(m.find(s[i]) != m.end())
        {
            count=count+x;
        }
        
    }
    return count%10003;
}
