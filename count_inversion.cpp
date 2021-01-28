#include<bits/stdc++.h>
using namespace std ;
int merge(int v[],int temp[],int left,int mid ,int right)
{
    int i = left;
    int j = mid;
    int k = left;
    int count = 0;
    while((i<=mid-1) and (j<=right))
    {
        if(v[i]<=v[j])
        {
            temp[k]=v[i];
            k++;
            i++;
        }
        else
        {
            temp[k]= v[j];
            k++;
            j++;
            count = count+(mid-i);
        }
        
    }
    while(i<=mid-1)
    {
        temp[k++]= v[i++];
    }
    while(j<=right)
    {
        temp[k++]=v[j++];
    }
    for(int i = left;i<=right;i++)
    {
        v[i]= temp[i];
    }
    return count;
   

}
int merge_sort(int  v[],int temp[],int low ,int high)
{
    int count = 0;
    int mid = 0;

    if(high>low)
    {

    
     mid =(high+low)/2;
    count+=merge_sort(v,temp,0,mid);
    count+=merge_sort(v,temp,mid+1,high);
    count+=merge(v,temp,low,mid,high);
    }
    return count;

     
}

int main()
{
    
    int v[]={2, 4, 1, 3, 5};
    int n = sizeof(v)/sizeof(int);
    int temp[n];

    
    int count = merge_sort(v,temp,0,n-1);
    cout<<count<<endl;

    

}