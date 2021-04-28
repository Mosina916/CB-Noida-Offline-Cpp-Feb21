/*




Given two strings string1 and string2, the task is 
to find the smallest substring in string1 containing all characters of string2 efficiently. 

*/

#include<iostream>
#include<climits>

using namespace std;

string getMinLenWindow(string text, string pattern) {
	int n = text.length();
	int m = pattern.length();

	string window = "None";
	if(m > n) {
		return window; // No window possible in text
	}

	int pattern_freq_map[256]={0};
	for(int i=0;  i<m; i++){
		char ch = pattern[i];
		pattern_freq_map[ch]++;
	}

	int window_freq_map[256]={0};

	int i=0; // to store the start of the window
	int min_len=INT_MAX;
	int start_idx=-1;
	int cnt = 0;

	for(int j=0; j<n; j++) {
		char ch = text[j];
		// expand the window
		window_freq_map[ch]++;

		// is my window valid?
		if(pattern_freq_map[ch]!=0 && window_freq_map[ch]<=pattern_freq_map[ch])
			cnt++;

		if(cnt==m) {
			// contract the window from start (i) to remove unwanted characters
			char temp = text[i];
			while(pattern_freq_map[temp]==0 || window_freq_map[temp]>pattern_freq_map[temp]){
				window_freq_map[temp]--;
				i++;
				temp = text[i];
			}

			int win_len = j-i+1;
			if(win_len<min_len){
				min_len=win_len;
				start_idx=i;
			}

		}
	}

	if(start_idx!=-1) {
		// I have found a window
		window = text.substr(start_idx, min_len);
	}

	return window;
}

int main() {


	string text;
	getline(cin, text);

	string pattern;
	getline(cin, pattern);

	string window = getMinLenWindow(text, pattern);

	cout << window << " " << window.length() << endl;

	return 0;
}

