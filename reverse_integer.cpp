class Solution {
public:
    long long int ne=0;
    int reverse(int x) {
        
        while(x!=0)
        {
            int k = x%10;
            ne = ne*10+k;
            x=x/10;
        }
       if(ne>=INT_MIN&&ne<=INT_MAX){return ne;}
return 0;
        
    }
};