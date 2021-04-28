/*

Given a string find the length of the longest substring without repeating characters. 


Approach 1 - N^3 Steps

*/

#include<iostream>

using namespace std;

bool hasUniqueCharacters(string str, int i, int j) {
	int visited[256]={0};
	for(int k=i; k<=j; k++) {
		char ch = str[k];
		if(visited[ch]) { // kth char is a repeating char
			return false;
		}
		visited[ch]=1;
	}
	return true;
}

int main() {

	string str;
	getline(cin, str);

	int n = str.length();
	int max_len = 0;
	int start_idx = 0;

	// iterating over all the starting indices of a substring
	for(int i=0; i<n; i++) {
		// iterate over all the ending indices of a substring
		for(int j=i; j<n; j++) {
			// substring that starts at index i & ends at index j
			if(hasUniqueCharacters(str, i, j)) {
				int len = j-i+1;      
				if(len >= max_len) {
					max_len = len;
					start_idx = i;
				}
			}
		}
	}

	cout << str.substr(start_idx, max_len) << " " << max_len << endl;

	return 0;
}
