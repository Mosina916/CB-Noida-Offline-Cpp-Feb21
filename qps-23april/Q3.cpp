/*





Kartik Bhaiya has a string consisting of only 'a' and 'b' as the characters. 
Kartik Bhaiya describes perfectness of a string as the maximum length substring of equal characters. 
Kartik Bhaiya is given a number k which denotes the maximum number of characters he can change. 
Find the maximum perfectness he can generate by changing no more than k characters.

Input Format
The first line contains an integer denoting the value of K. 
The next line contains a string having only ‘a’ and ‘b’ as the characters.

*/

#include<iostream>

using namespace std;

int maxLenWindowOfEqualCharacters(string str, char ch, int k) {
	int i=0; // start of the window
	int max_len=0;
	int cnt=0;
	int n=str.length();
	int start_idx=-1;
	for(int j=0; j<n; j++) {
		if(str[j]!=ch) {
			// swap
			cnt++;
		}

		while(cnt>k) {
			// start shrinking from the beginning of the window
			if(str[i]!=ch)
				// undo the swap
				cnt--;
			i++;
		}

		// cnt<=k
		int win_len = j-i+1;
		// max_len = max(max_len, win_len);
		if(max_len<win_len){
			max_len=win_len;
			start_idx=i;
		}
	}

	cout << ch << " : " << str.substr(start_idx, max_len) << endl;

	return max_len;
}

int main() {

	string str;
	getline(cin, str);

	int k;
	cin >> k;

	int X = maxLenWindowOfEqualCharacters(str, 'a', k);
	int Y = maxLenWindowOfEqualCharacters(str, 'b', k);

	cout << max(X, Y) << endl;

	return 0;

}