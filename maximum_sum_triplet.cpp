int Solution::solve(vector<int> &arr) {
    int ans = 0;
    int n = arr.size();
  
    for (int i = 1; i < n - 1; ++i) { 
        int max1 = 0, max2 = 0; 
  
        
        for (int j = 0; j < i; ++j) 
            if (arr[j] < arr[i]) 
                max1 = max(max1, arr[j]); 
  
        
        for (int j = i + 1; j < n; ++j) 
            if (arr[j] > arr[i]) 
                max2 = max(max2, arr[j]); 
  
        // store maximum answer 
        if(max1 && max2) 
             ans=max(ans,max1+arr[i]+max2); 
    } 
  
    return ans; 
}
