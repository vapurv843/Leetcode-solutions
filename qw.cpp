#include<iostream>
using namespace std ;
int main()
{
    int arr[3][]={{1,2,3},{1,2,3},{1,2,4}};
    int row = sizeof(arr)/sizeof(int);
    cout<<row<<endl;
}