vector<string> generate(int n)
{
	// Your code here
	queue<string> q;
    vector<string> v;
    q.push("1");
    while (n--) {
        string s = q.front();
	v.push_back(s);
	q.pop();
	q.push(s + "0");
	q.push(s + "1");
    }
    return v;
}
