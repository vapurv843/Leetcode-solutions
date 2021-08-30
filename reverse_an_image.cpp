class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        //int n =  image[0].length();
        for(int i = 0;i<m;i++)
        {
            reverse(image[i].begin(),image[i].end());
            
            for(int j =0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j] =1;
                }
                else
                {
                    image[i][j] = 0;
                }
            }
        }
        return image;
        
    }
};