class Solution {
public:
    long long int net=0;
    int reverse(int x) {
        
        while(x!=0)
        {
            int k = x%10;
            net = net*10+k;
            x=x/10;
        }
       if(net>=INT_MIN&&ne<=INT_MAX)
       {
           return net;
       }
        return 0;
        
    }
};
