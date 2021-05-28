#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	ll x;
	cin >> x;
	ll ex = x % 11;
	if (x - (ex * 111) >= 0 and (x - (ex * 111)) % 11 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed << setprecision(25);
	cerr << fixed << setprecision(10);
	auto start = std::chrono::high_resolution_clock::now();
	int tt = 1;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++)
	{
		// cout<<"Case #"<<qq<<": ";
		solve();
	}
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
	// cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
	return 0;
}