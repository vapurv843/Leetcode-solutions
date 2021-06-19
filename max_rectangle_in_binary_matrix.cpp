int Solution::trap(const vector<int> &height) {
        int n=height.size();
        vector<int> left(n,0);
        left[0]= height[0];
        vector<int> right(n,0) ;
        right[n-1] = height[n-1];
        for(int i = 1;i<n;i++)
        {
            left[i]= max(left[i-1],height[i]);
            right[n-i-1]= max(height[n-i-1],right[n-i]);
        }
        int sum = 0;
        for(int i = 1;i<n;i++)
        {
            sum+=max(0,min(right[i],left[i])-height[i]);
        }
        return sum;
    }

