#include<bits/stdc++.h>
using namespace std ;
int countGoodRectangles(vector<vector<int>>& rectangles) {
        int res = 0;
        int side = 0;
        int maxlen = 0;
        for(auto x:rectangles)
        {
            side = min(x[0],x[1]);
            if(maxlen<side)
            {
                maxlen = side;
                res=1;
            }
            else if (maxlen==side) res++;
        }
        return res;
        
    }
int main()
{
    vector<vector<int>> v = {{5,8},{3,9},{5,12},{16,5}};
    cout<<countGoodRectangles(v)<<endl;

}