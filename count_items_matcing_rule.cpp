class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(ruleKey=="color")
        {
            for(int i = 0;i<items.size();i++)
            {
                if(ruleValue==items[i][1])
                {
                    count++;
                }
            }
        }
        else if(ruleKey=="type")
        {
            for(int i = 0;i<items.size();i++)
            {
                if(ruleValue==items[i][0])
                {
                    count++;
                }
            }
        }
        else
        {
            for(int i = 0;i<items.size();i++)
            {
                if(ruleValue==items[i][2])
                {
                    count++;
                }
            }
        }
        return count;
        
        
    }
};