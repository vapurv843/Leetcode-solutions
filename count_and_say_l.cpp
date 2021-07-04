class Solution {
public:
    string countAndSay(int n) {
        if (0 == n) return "";  
    	if (1 == n) return "1";
    	
    	std::string res="1";
    	std::string s;
    
    	for (int i = 1; i < n; i++){   
    
    		int len = res.size();
            
           
    		for (int j = 0; j < len; j++){  
    		    
    		    int count=1; 
    
                
				while ((j + 1 < len) && (res[j] == res[j + 1])){
					count++;    
					j++;       
				}
                
                
    			s += std::to_string(count) + res[j];
    		}
    
            // save temporary result
    		res = s;
    		
    		// clean our string-helper
    		s.clear();
    
    	}
    
    	return res;
        
    }
};