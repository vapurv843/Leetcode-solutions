class Solution {
public:
    int pref[100005][101];
    
    int count(int i, int j){
        int ans=105;
        int prev=-1;
        for(int k=1; k<=100; k++){
            int x = pref[j][k];
            if(x==0) continue;
            if(i-1>=0){
                x-=pref[i-1][k];
            }
            if(x>0){
                if(prev!=-1){
                    ans = min(ans, k-prev);
                }
                prev = k;
            }
        }
        if(ans==105){
            return -1;
        }
        return ans;
    }
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        memset(pref, 0, sizeof(pref));
        
        for(int i=0; i<nums.size(); i++){
            pref[i][nums[i]]++;
            if(i>0){
                for(int j=1; j<=100; j++){
                    pref[i][j]+=pref[i-1][j];
                }
            } 
        }
        vector<int> ans;
        for(int k=0; k<queries.size(); k++){
            int i=queries[k][0], j=queries[k][1];
            ans.push_back(count(i, j));
        }
        return ans;
        
    }
};