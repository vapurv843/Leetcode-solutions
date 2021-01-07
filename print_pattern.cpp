#include <iostream>
using namespace std;
void find(int n,int x,int flag)
{
    if(n==x and flag==1){
        cout<<n<<endl; 
        return;
    }
    cout<<x<<" ";
    if(flag==0){
        if(x<=0) find(n,x+5,1);
        else find(n,x-5,0);
    }
    else{
        find(n,x+5,1);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    find(n,n,0);
	}
}