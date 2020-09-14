vector<int> Solution::solve(vector<int> &a) {
    int n = a.size();
map<int, int> m;
for(int i = 0; i < n; i++)
{
if(m.find(a[i]) != m.end())
{
int index = m[a[i]];
a[index] = a[index]+1;
m[a[index]] = index;
}
m[a[i]] = i;
}
return a;
}

