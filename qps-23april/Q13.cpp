/*

Given a string find the length of the longest substring without repeating characters. 

Approach 3 - N Steps
*/

#include<iostream>

using namespace std;

int main() {

	string str;
	getline(cin, str);

	int n = str.length();
	int max_len = 0;
	int start_idx = 0;
	int win_len = 0;

	int visited[256];
	for(int i=0; i<256; i++)
		visited[i]=-1;

	for(int i=0; i<n; i++) {
		char ch=str[i];
		int  lo=visited[ch]; 
		if(lo == -1 || lo < i-win_len) {
			// expand
			win_len++;
		} else {
			// contract
			win_len=i-lo;
		}
		if(win_len>max_len) {
			max_len=win_len;
			start_idx=i-win_len+1;
		}
		visited[ch]=i;
	}	

	cout << str.substr(start_idx, max_len) << " " << max_len << endl;

	return 0;
}
