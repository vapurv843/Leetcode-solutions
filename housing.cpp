#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int n = v.size();
    int k = 3;
    int i = 0;      
    int j = 0;
    int cs = 0;
    while(j<n)
    {
        cs += v[j];
        j++;
        while(cs>k and i<j)
        {
            cs = cs-v[i];
            i++;
        }
        if(cs==k) {
            cout<<i<<"-"<<j-1<<endl;

        }
    }
}