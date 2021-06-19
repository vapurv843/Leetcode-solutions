#include<bits/stdc++.h>
using namespace std;
class load
{
    private:
        int a;
    public:
        void set(int x)
        {
            a = x;
        }
        int display()
        {
            return a;
        }
};
int main()
{
    load obj;
    obj.set(9);
   int k = obj.display();
   cout<<k<<endl;

}