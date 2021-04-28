/*

Given a list of N strings <S1, S2, ... , SN> each consisting of digits and spaces, the
number of spaces is the same for each entry. The goal is to implement a variation of the
sort command.

No string consists of consecutive spaces. Also no string starts or ends with a space.
Spaces are used to divide a string into columns, which can be used as keys in comparisions.

The program has to support the required parameters:

key: integer denoting column used as a key in comparision. The left-most column is denoted by 1.
reversed: boolean variable indicating whether to reverse the result of comparisions
comparision-type: either lexicographic or numeric.

Lexicographic means we use the Lexicographic order where for example "122" < "13". 
Numeric means we compare the strings by their numeric values, so 122 > 13.

If the comparision type is 'numeric' and the numeric values of the keys of Si and Sj
are equal for i<j then Si is considered strictly smaller than Sj because it comes first.

*/

#include<iostream>

using namespace std;

string extractKeyFromString(string str, int key) {
	char* token = strtok((char*)str.c_str(), " ");
	while(key>1){
		token=strtok(NULL, " ");
		key--;
	}
	return (string)token;
}

int convertStringToInt(string str) {
	
	int num=0;
	int power=1;
	for(int i=str.size()-1; i>=0; i--) {
		num += (str[i]-'0') * power;
		power *= 10;
	}
	return num;
}

bool lexicoCompare(pair<string, string> p1, pair<string, string> p2) {
	string key1 = p1.second; // str 1's key
	string key2 = p2.second; // str 2's key
	return key1 < key2;
}


bool numericCompare(pair<string, string> p1, pair<string, string> p2) {
	string key1 = p1.second; // str 1's key
	string key2 = p2.second; // str 2's key
	return convertStringToInt(key1) < convertStringToInt(key2);
}

int main() {

	// read no. of strings
	int n;
	cin>>n;

	// read whitespace 
	cin.get();

	// read n strings
	string str[n];
	for(int i=0; i<n; i++) {
		getline(cin, str[i]);
	}

	// read key
	int key;
	cin>>key;

	string ordering; // 'numeric' or 'lexicogrphic'
	cin>>ordering;

	string reversal; // 'true' or 'false'
	cin>>reversal;

	// declare an array of string pairs
	pair<string, string> strPair[n];
	for(int i=0; i<n; i++) {
		strPair[i].first = str[i];
		strPair[i].second= extractKeyFromString(str[i], key);
	}

	if(ordering=="numeric") {
		// sort with numeric keys
		sort(strPair, strPair+n, numericCompare);

	} else {
		// sort lexicographically
		sort(strPair, strPair+n, lexicoCompare);
	}

	if(reversal=="true") {
		// reverse the sorted string array
		for(int i=0; i<n/2; i++) {
			swap(strPair[i], strPair[n-i-1]);
		}
	}

	// print 
	for(int i=0; i<n; i++){
		cout<<strPair[i].first<<endl;
	}


	return 0;
}