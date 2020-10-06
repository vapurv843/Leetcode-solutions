class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue <int, vector<int>, greater<int> > pq;
	    vector<int> v;
	    for(int i = 0;i<n;i++)
	    {
	        pq.push(arr[i]);
	        if(pq.size()>k)
	        {
	            pq.pop();
	            
	        }
	    }
	    while(pq.size()>0)
	    {
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    reverse(v.begin(),v.end());
	    return v;
	}

};