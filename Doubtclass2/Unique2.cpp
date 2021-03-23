// Created by Mayank
#include <bits/stdc++.h>
using namespace std;

int set1(int value) {
	return log2(value & (-value));//From this we get index of the first set bit
	// For position we use this as the formulae: (log2(value & (-value))+1);

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// Step 1: Xor all the elements
	int res = 0;
	for (int i = 0; i < n; i++) {
		res ^= a[i]; //res=res^a[i];
	}
	//cout << res << endl;

	// Step 2: Find the first set bit
	int value = set1(res);
	//cout << value << endl;

	//Step 3:Mask
	int mask = 1 << value;

	// Step 4:
	int ans = 0;//Stores the first non repeating element
	for (int i = 0; i < n; i++) {
		if (a[i]&mask == 1) {
			ans = ans ^ a[i];
		}
	}
	int ans1 = res ^ ans;//Second Non Repeating element

	if (ans1 < ans) {
		cout << ans1 << " " << ans;
	} else {
		cout << ans << " " << ans1;
	}

	return 0;
}