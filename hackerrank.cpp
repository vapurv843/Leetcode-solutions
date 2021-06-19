#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> one={1,2,3,3,3,5,4};
    vector<int> two={1,2,3,4,3,5,4};
    int m = one.size();
    int n = two.size();
    int i =0;
    int j = 0;
    int res = 0;
    int count = 0;
    while(i<m and j <n)
    {
        if(one[i]==two[j])
        {
            res = one[i];
            count++;
        }
        i++;
        j++;
    }
    cout<<res;
    

}