#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;

}
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; 
    int i = (low -1);
  
    for (int j = low; j <= high - 1; j++)  
    {  
        
        if (arr[j] < pivot)  
        {   
            i++; 
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return (i + 1);  
} 
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={3,5,1,7,9,87,34,65};
    int n = sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    printarr(arr,n);

}