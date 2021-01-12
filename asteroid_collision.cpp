class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        for(int i=0;i<n;i++){
                   int flag=0;
                        while(!s.empty()&&s.top()>0&&arr[i]<0){
                            int a=abs(s.top());
                            int b=abs(arr[i]);
                            if(a>b){
                                flag=1;
                                break;
                            }
                            else if(a<b){
                                s.pop();
                            }
                            else{
                                flag=1;
                                s.pop();
                                break;
                            }
                        }
                        
                        if(flag==0)   s.push(arr[i]);
        }
        vector<int> res;
        while(s.size()>0)
        {
            res.push_back(s.top());
            s.pop();
            
        }
        if(res.size()==0) return res;
        reverse(res.begin(),res.end());
        return res;
                        
        
    }
};