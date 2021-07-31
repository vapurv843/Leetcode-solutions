class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        int move = 1;
        queue<pair<int,int>> q;
        q.push({e[0],e[1]});
        int row = maze.size();
        int col = maze[0].size();
        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        maze[e[0]][e[1]]='+';
        while(q.empty()==false)
        {
            int l = q.size();
            for(int k = 0;k<l;k++)
            {
                auto [i,j]=q.front();
                q.pop();
                for(int l=0;l<4;l++)
                {
                    int x = i+dir[l][0];
                    int y = j+dir[l][1];
                    if(x<0 or y<0 or x>=row or y>=col or maze[x][y]=='+')
                        continue;
                    if(x==0 or y == 0 or x==row-1 or y ==col-1)
                        return move;
                    maze[x][y]='+';
                    q.push({x,y});
                }
            }
            move++;
        }
        return -1;
        
    }
};