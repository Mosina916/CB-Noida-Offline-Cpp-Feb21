// Created by Mayank
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		// Count No. Of Set Bits
		while (n > 0) {
			ans += (n & 1);
			n = n >> 1;
		}

		cout << ans;
		cout << '\n';
	}
	return 0;
}