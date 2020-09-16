int Solution::solve(string A) {
    int i = 0, j = 1, strLen = A.length();
    if (strLen == 1)
    	return 0;
    
    int idx[2] = {0, 0}; // {start, len}
    
    while (i < strLen) {
    	int start = i;
    	while (j < strLen && A[i] == A[j])
    		j++;
    
		i--;
    	while (i > -1 && j < strLen && A[i] == A[j]) {
    		i--;
    		j++;
    	}
    
    	if (i == -1 && idx[1] < j - i - 1) {
    		idx[0] = i;
    		idx[1] = j - i - 1;
    	}
    
    	i = j++;
    }
    
    return strLen - idx[1];
}
