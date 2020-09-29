for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            for (int k = j + 1; k < n; k++) { 
                
                int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k]; 
  
                if (x == y + z || y == x + z || z == x + y) 
                    return true; 
            } 
        } 
    } 
  
    
    return false; 