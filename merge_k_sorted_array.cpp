int *mergeKArrays(int arr[][N], int k)
{
   priority_queue<int,vector<int>,greater<int>> pq;
   for(int i = 0;i<k;i++)
   {
       for(int j = 0;j<k;j++)
       {
           pq.push(arr[i][j]);
       }
   }
   int index = 0;
   int *res = new int[k*k];
   while(pq.size()!=0)
   {
       res[index++]= pq.top();
       pq.pop();
       
   }
   return res;
}