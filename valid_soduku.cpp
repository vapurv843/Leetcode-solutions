#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[9][9],i,j;
        for(i=0; i<9; i++)
        {
            for (j=0; j<9; j++)
            {
                cin>>arr[i][j];
            }
        }
        set<string>s;
        int f=1;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int c=arr[i][j];
                string r=to_string(c)+" found in row "+to_string(i);
                string col=to_string(c)+" found in column "+to_string(j);
                string b=to_string(c)+" found in box "+to_string(i/3)+"-"+to_string(j/3);
                //cout<<r<<" "<<col<<" "<<b<<endl;
                if(s.find(r)!=s.end()||s.find(col)!=s.end() ||
                        s.find(b)!=s.end())
                {
                    f=0;
                }
                else if(c!=0)
                {
                    s.insert(r);
                    s.insert(col);
                    s.insert(b);
                }
            }
            if(f==0)
                break;
        }
        cout<<f<<endl;
    }
    return 0;
}
