#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    
    A()
    {
        cout<<"Constructor is called"<<endl;
    }

};

int main()
{
    A a,b,c;
    A *ptr = new A;
    A *ptr1 = (A*)malloc(sizeof(A));

    
}