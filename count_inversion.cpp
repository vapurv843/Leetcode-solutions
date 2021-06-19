#include<bits/stdc++.h>
using namespace std ;

long long Count=0;
void  merge(long long v[],long long temp[],long long left,long long  mid ,long long right)
{
    long long int i = 0;
    long long int j = 0;
    long long int k = left;
    
    long long n1=0,n2=0;
    
    n1 = (mid-left+1);
    n2 = (right-mid);
    
    while((i<n1) && (j<n2))
    {
        if(v[left+i]<=v[mid+1+j])
        {
            temp[k]=v[left+i];
            k++;
            i++;
        }
        else
        {
            temp[k]= v[mid+1+j];
            k++;
            j++;
            Count = Count+(mid-i+1);
        }
        
    }
    while(i<n1)
    {
        temp[k]= v[left+i];
        k++;
        i++;
    }
    while(j<n2)
    {
        temp[k]=v[mid+1+j];
        k++;
        j++;
    }
    j =0;
    for( i = left;i<=right;i++, j++)
    {
        v[i]= temp[j];
    }
   // return count;
   

}
void merge_sort(long long  v[],long long temp[],long long low ,long long high)
{
    long long mid = 0;

    if(high>low)
    {

    
    mid =(high+low)>>1;
    merge_sort(v,temp,0,mid);
    merge_sort(v,temp,mid+1,high);
    merge(v,temp,low,mid,high);
    }

     
}

/*long long  inversionCount(long long v[], long long N)
{
    long long temp[N]={0,};
    Count =0;
    merge_sort(v,temp,0,N-1);
    return Count;
}

*/
int main()
{
    
    long long v[]={2, 4, 1, 3, 5};
    long long n = sizeof(v)/sizeof(int);
    long long  temp[n] = {0,};

    
    merge_sort(v,temp,0,n-1);
    cout<<Count<<endl;

    

}