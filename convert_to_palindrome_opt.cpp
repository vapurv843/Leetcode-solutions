int Solution::solve(string A) {
    int low=0;
    int high=A.size()-1;
    int unmatch=0;
    while(low<high){
        if(A[low]==A[high]){ 
            low++; high--;
            continue;
        }
        if(unmatch!=0) return 0;
        if(high==low+1) return 1;
        else if(A[low+1]==A[high]) low++;
        else if(A[low]==A[high-1]) high--;
        else return 0;
        unmatch++;
    }
    return 1;
}
