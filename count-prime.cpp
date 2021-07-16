class Solution {
public:
    int countPrimes(int n) {
        if(n==0 or n== 1) return 0;
        vector<bool> visited(n,true);
        int count =0;
        for(int i = 2;i<n;i++)
        {
            if(visited[i]==0)  continue;
            {
                //continue;
                count++;
                
            }
            for(long long j =(long long ) i*i;j<n;j+=i)
            {
                visited[j]=false;
            }
        }
        return count;
    }
};