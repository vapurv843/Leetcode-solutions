int Solution::sqrt(int A) {
    if(A==0 || A==1)
        return A;
    long long  start = 1;
    long long end = A;
    long long ans = 0;
    while(start<=end)
    {
         long long mid = (start+end)/2;
         if(mid*mid==A)
         {
             return mid;
         }
         if(mid*mid<A)
         {
             start = mid+1;
             ans = mid;
             
         }
         else
         {
             end = mid-1;
         }
    }
    return ans;
}
