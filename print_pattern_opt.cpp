#include <iostream>
using namespace std;
void find(int n)
{
    if(n<=0)
    {
        cout<<n<<" ";
        return ;
    }
    cout<<n<<" ";
    find(n-5);
    cout<<n<<" ";
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    find(n);
	    cout<<endl;
	}
}