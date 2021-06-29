#include<bits/stdc++.h>
using namespace std ;
class human{
    public:
    int age;
    void introduce();


};
void human :: introduce()
{
    cout<<human::age<<endl;
}
int main()
{
   human a;
   a.age = 22;
   a.introduce();
}