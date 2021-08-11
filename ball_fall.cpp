class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        vector<int> v(n,0);
        
        for(int i=0;i<n;i++){
            int row=0, col=i;     // current column
            while(1){
                
               
                int newcol = grid[row][col]+col;
                
                
                if(0<=newcol && n>newcol && grid[row][col]==grid[row][newcol]){
                    row++;
                    col=newcol;
                } else{                    
                    // There is a blocakage , break
                    v[i]=-1;
                    break;
                }
                if(row>=m){
                    // we reached out of the last row
                    v[i]=col;
                    break;
                }
            }
        }
        return v;
    }
};