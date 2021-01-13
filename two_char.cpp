#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;

int valid(string x) {
    const int n = x.size();
    for (int i = 1; i < n; ++i)
        if (x[i] == x[i-1])
            return false;
    return true;
}

int main() {
    int asd;
    cin>>asd;
    string s;
    cin>>s;
    int ans = 0;
    for (char a = 'a'; a <= 'z'; ++a)
    for (char b = 'a'; b <= 'z'; ++b)
    if (a != b)
    {
        if (s.find(a) == string::npos) continue;
        if (s.find(b) == string::npos) continue;
        string x;
        for (const char ch : s)
            if (ch == a || ch == b)
                x.push_back(ch);
        if (valid(x))
            ans = max(ans, (int)x.size());
    }
    printf("%d\n", ans);
}
