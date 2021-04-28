// Created by Mayank
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	int maxi = a ^ b;//Xor of the two Numbers Given
	int pos = 0;

	// Step 2: Positon of the msb that is set or the value of the last set bit
	// or we can say that it represents the no of the bits available to us from the last set bit+1
	// Example: 0010010: pos gives 5 here!
	while (maxi > 0) {
		pos++;
		maxi = maxi >> 1;
	}
	int ans = 0;
	int p = 1;

	// Step 3:Formation of the Maximum Xor Number!
	while (pos > 0) {
		ans += p;
		p = p << 1;
		pos--;
	}
	cout << ans << endl;
	return 0;
}