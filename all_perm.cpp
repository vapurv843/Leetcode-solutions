#include<bits/stdc++.h>
using namespace std;
void print_seq(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;

    }
    print_seq(input.substr(1),output);
    print_seq(input.substr(1),output+input[0]);

}
int main()
{
    string output="";
    print_seq("abc",output);
}