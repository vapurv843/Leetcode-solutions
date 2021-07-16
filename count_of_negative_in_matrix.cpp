class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        if(grid[0][0]>0 and grid[m-1][n-1]>0)
        {
            return 0;
        }
        
        for(int i = 0;i<m;i++)
        {
            for(int j = n-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};