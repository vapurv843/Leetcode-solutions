int Solution::isPalindrome(string A) {
  string s;
for(int i =0; i<A.size(); i++){
    int a = (int)A[i];
    if((a>=97 && a<=122) || (a>=65 && a<=90) || (a>=48 && a<=57))
    s += a;
}
transform(s.begin(), s.end(),s.begin(), :: tolower);


int f =0;
int l =s.size()-1;
while(f<l){
    
    if(s[f]!=s[l]){
        return 0;
    }
    else
    f++;
    l--;
    
}
return 1;
}

