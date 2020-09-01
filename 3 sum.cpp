int Solution::threeSumClosest(vector<int> &A, int B) {
     if(A.size() < 3){
        return 0;
    }
    
    sort(A.begin(), A.end());
    
    int i = 0;
    int sum, minDiff = INT_MAX;
    
    while(i < A.size()-2){
        int left = i+1;
        int right = A.size()-1;
        while(right > left){
            int temp = A[i]+A[left]+A[right];
            int diff = abs(temp-B);
            if(diff == 0){
                return B;
            }
            if(diff < minDiff){
                minDiff = diff;
                sum = temp;
            }
            if(temp < B){
                left++;
            }
            else{
                right--;
            }
        }
        i++;
    }
    
    return sum;
}
