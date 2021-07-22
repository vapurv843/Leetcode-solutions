#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string a, b, c;
        int result=10;
        cin>>a;
        b = a;
        c = a;
        for(int i=0; i<10; i+=2){
            if(a[i] == '?'){
                b[i] = '1';
                c[i] = '0';
            }
            if(a[i+1] == '?'){
                b[i+1] = '0';
                c[i+1] = '1';
            }
        }
        int temp1 = int(b[0])-48, temp2= int(c[0])-48;
        temp2*= (-1);
        int a1 = 4, k1 = 5;
        for(int i=1; i<10; i++){
            if(i%2==0){
                temp1 += int(b[i]) - 48;
                temp2-= int(c[i]) - 48;
                a1--;
            }
            else{
                temp1 -= int(b[i]) - 48;
                temp2+= int(c[i]) - 48;
                k1--;
            }
            if(temp1> k1|| temp2> a1){
                result = i+1;
                break;
            }
        }
        cout<<result<<endl;
    
}

int main ()
{
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
        
}