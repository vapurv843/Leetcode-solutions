#include<bits/stdc++.h>
using namespace std ;
void merge(vector<int> &v,int mid,int low,int high)
{
    //cout<<"merge is called"<<endl;
    vector<int> naya(high+1);
    for(int i = 0;i<=high;i++)
    {
        naya[i]=v[i];
    }
    //cout<<"after loop"<<endl;
    int left = low;
    int right = mid+1;
    int curr = low;
    while(left<=mid and right <=high)
    {
        if(naya[left]<=naya[right])
        {
            v[curr ]=naya[left];
            left++;
            //cout<<"firts is called"<<endl;
        }
        else{
            v[curr]= naya[right];
            right++;
        }
        curr++;
    }
    //cout<<"while is executed"<<endl;
    int rem = mid-left;
    for(int i = 0;i<=rem;i++)
    {
        v[curr+i]=naya[left+i];
    }
}
void mergesort(vector<int> &v,int low,int high)
{
    if(low<high)
    {
        int mid = (low + high)/ 2; 
        mergesort(v,low,mid);//cout<<"i"<<endl;
        mergesort(v,mid+1,high);//cout<<"hi"<<endl;
        merge(v,mid,low,high);//cout<<"hii"<<endl;
    }

}
int main()
{
    vector<int> v={4,6,1,3};
    int n = v.size();
    mergesort(v,0,n-1);
    for(auto x:v)
    {
        cout<<x<<" ";
    }

}