// Created by Mayank
#include <bits/stdc++.h>
using namespace std;

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
	// Step 1:
	int cnt[64] = {0};

	// Step 2:Count and extract the bits
	for (int j = 0; j < n; j++) { //Iterate over the entire array
		int i = 0, value = a[j];
		while (value > 0) {
			cnt[i] += (value & 1);
			i++;
			value = value >> 1;
		}
	}

	//Step 3: Convert
	int p = 1, ans = 0;
	for (int i = 0; i < 64; i++) {
		cnt[i] = cnt[i] % 3;
		ans = ans + (cnt[i] * p);
		p = p << 1; //p=p*2;
	}
	cout << ans << endl;
	return 0;
}