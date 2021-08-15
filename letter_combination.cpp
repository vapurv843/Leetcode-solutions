class Solution {
public:
    vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;  
    void helper(string &digits, int i, string combi){	
	if(i == size(digits)) {  
		ans.push_back(combi);    
		return;
	}
	
	for(auto &c : mappings[digits[i] - '2'])
		helper(digits, i + 1, combi + c);
}
    vector<string> letterCombinations(string digits) {
        if(digits == "") return ans;         
	helper(digits, 0, "");              
	return ans;
                

        
    }
};