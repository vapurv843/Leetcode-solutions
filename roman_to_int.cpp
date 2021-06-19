    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
   
        int romanToInt(string s) {
        
        map<char, int> m = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}};
        
        int total = 0;
        int n = s.length();
        cout<<n<<endl;
        for(int i = 0; i < s.length(); i++){
            if(m[s[i+1]] <= m[s[i]])  total += m[s[i]]; 
            else  total -= m[s[i]];  
        }
        return total;
        
    }
    int main()
    {
        string s;
        s = "III";
        int k = romanToInt(s);
        cout<<k;
    }
