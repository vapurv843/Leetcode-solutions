class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        char res = '#';
        int start = 0;
        auto res = upper_bound(letters.begin(), letters.end(), target);
        return res == letters.end() ? letters[0] : *it;
        
    }
};