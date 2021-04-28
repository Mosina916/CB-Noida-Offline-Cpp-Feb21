/*

Given a string find the length of the longest substring without repeating characters. 

Approach 2 - N^2 Steps
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
		int visited[256]={0};
		// iterate over all the ending indices of a substring
		for(int j=i; j<n; j++) { 
			char ch = str[j];
			if(visited[ch]) 
				// contract -> slide+reset
				break;

			// expand
			int len = j-i+1;      
			if(len >= max_len) {
				max_len = len;
				start_idx = i;
			}

			visited[ch]=1;
		}
	}

	cout << str.substr(start_idx, max_len) << " " << max_len << endl;

	return 0;
}
