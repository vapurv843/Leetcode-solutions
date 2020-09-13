#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        
        unordered_map <long long , long long> m1;
        long long x;
        for(long long i = 0;i<n;i++)
        {
            cin>>x;
            m1[x]++;
        }
        for(long long  i = 0;i<m;i++)
        {
            cin>>x;
            if(m1[x]>0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
                
            
            m1[x]++;
        }
        
    }
    return 0;
}