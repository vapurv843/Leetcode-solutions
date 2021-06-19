#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		cout << 100 / gcd(100, k) << endl;
	}
	return 0;
}