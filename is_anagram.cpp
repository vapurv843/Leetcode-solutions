bool isAnagram(string a, string b){
    
    int n = a.length();
    int j= b.length();
    if(n!=j) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) return true;
    return false;

    
    
}