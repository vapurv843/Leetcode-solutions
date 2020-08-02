public:
    bool detectCapitalUse(string word) {
		int size = word.length();
        int count =0;
        for(int i = 0;i<size;i++)
        {
            if(isupper(word[i]))
            {
                count++;
            }
        }
        if((count==0) || (count ==size) || (count ==1) && (isupper(word[0])))
        {
            return true;
        }
        else
            return false;
};