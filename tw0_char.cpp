#include<bits/stdc++.h>
using namespace std ;
int maxi(string s,int n)
{
    //int n = s.length();
    if(n<=1) return 0;
    int total_char = 26;
    char pairs[total_char][total_char];
    int count[total_char][total_char];
    memset(count,0,sizeof(count));
    for(int i = 0;i<n;i++)
    {
        char letter = s[i];
        int num_letter = s[i]-'a';
        for(int col=0;col<total_char;col++)
        {
            if(pairs[num_letter][col]==letter)
            {
                count[num_letter][col]=-1;
            }
            if(pairs[num_letter][col]!=-1)
            {
                pairs[num_letter][col]=letter;
                count[num_letter][col]++;
            }
        }
        for(int row=0;row<total_char;row++)
        {
            if(pairs[row][num_letter]==letter)
            {
                count[row][num_letter]=-1;
            }
            if(pairs[row][num_letter]!=-1)
            {
                pairs[row][num_letter ]=letter;
                count[row][num_letter]++;
            }
        }
    }
    int mxx=INT_MIN;
    for(int i = 0;i<total_char;i++)
    {
        for(int j = 0;j<total_char;j++)
        {
            mxx = max(mxx,count[i][j]);
        }
    }
    return mxx;

}
int main()
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int k=maxi(s,n);
    cout<<k<<endl;
}