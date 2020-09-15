string Solution::countAndSay(int A) {
     s+="*"; //dummy char
    string res;
    int count=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) count++;
        else{
            res+=to_string(count)+s[i];
            count=1;
        }
    }
    res.pop_back();
    res.pop_back();
    return res;
}

string Solution::countAndSay(int n) {
    if(n==0) return "";
    vector<string> v(n,"");
    v[0]="1";
    for(int i=1;i<n;i++)
        v[i]=get(v[i-1]);
    
    return v[n-1];
}
