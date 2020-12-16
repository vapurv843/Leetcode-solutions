#include<iostream>
using namespace std ;
void arrange(long long arr[], int n) {
    for (int i=0; i < n; i++)
        arr[i] += (arr[arr[i]]%n)*n;
 
    
    for (int i=0; i<n; i++)
        arr[i] /= n;
    
}
int main()
{
    int arr[]={4,3,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    arrange(arr,n);
}