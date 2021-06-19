#include <iostream>
using namespace std;

int cs(int arr[], int n){
    

   int dp[n + 1];
    for(int i = 0 ; i <= n; i++){
        dp[i] = 0;
    }
    dp[n] = 1;

    for(int i = n - 1; i >= 0; i--){
        for(int jumps = 1; jumps <= arr[i]; jumps++){
            if(i + jumps <= n){ 
                dp[i] += dp[i + jumps];
            }
        }
    }
    return dp[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}