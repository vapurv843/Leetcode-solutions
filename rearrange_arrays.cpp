#include <bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void arrange(int a[],int n)
{
    int small = 0;
    int large = n-1;
    int temp[n];
    int flag = true;
    for(int i = 0;i<n;i++)
    {
        if(flag)
        {
            temp[i]=a[large--];
        }
        else
        {
            temp[i]=a[small++];
        }
        flag = !flag;
    }
    for(int i = 0;i<n;i++)
    {
        a[i]=temp[i];
    }
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i= 0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    arrange(a,n);
	    print(a,n);
	    cout<<endl;
	}
}