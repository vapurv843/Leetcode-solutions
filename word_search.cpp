class Solution {
public:
    bool check(vector<vector<char>>& board, string word,int i,int j,int pos)
    {
        if(pos==word.length()) return true;
        if(i<0 || j<0 or i>=board.size() or j>=board[0].size()) return false;
        if(word[pos]!=board[i][j]) return false;
        char temp = board[i][j];
        board[i][j]='*';
        if(check(board,word,i+1,j,pos+1) or check(board,word,i-1,j,pos+1) or check(board,word,i,j+1,pos+1) or check(board,word,i,j-1,pos+1))
        {
            return true;
        }
        board[i][j]=temp;
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i =0 ;i<board.size();i++)
        {
            for(int j = 0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j] and check(board,word,i,j,0))
                {
                    return true;
                }
            }
            
        }
        return false;
        
    }
};