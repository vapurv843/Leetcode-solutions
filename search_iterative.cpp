#include<bits/stdc++.h>
using namespace std;
int m = 0;

void calculate(char *a,int i,int n)
{
    int j = 0;
    if(i==n)
    {
        m++;
    }
    else
    {
        for(j = i;j<=n;j++)
        {
            swap((a+i),(a+j));
            calculate(a,i+1,n);
            swap((a+i),(a+j));
        }
    }
    
}
int main()
{
   char str[]="ZOHO";
   int len =0;
   int i = 0;
   len = strlen(str);
   calculate(str,0,len-1);
   cout<<m;

}