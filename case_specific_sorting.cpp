string caseSort(string str, int n){
    
    vector<char> v_upper;
    vector<char> v_lower;
    for(int i = 0;i<n;i++)
    {
      if(str[i]<='z' && str[i]>='a')
      {
          v_lower.push_back(str[i]);
      }
      else
      {
          v_upper.push_back(str[i]);
      }
    }
    sort(v_upper.begin(),v_upper.end());
    sort(v_lower.begin(),v_lower.end());
    int j = 0;
    int l=0;
    for(int i = 0;i<n;i++)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            str[i]= v_lower[j];
            ++j;
        }
        else
        {
            str[i]=v_upper[l];
            ++l;
        }
    }
    return str;
}