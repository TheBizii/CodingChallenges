#include <iostream>
#include <map>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	map<string, int> words;
	
	// It is safe to do that, since input lines do not contain punctuations, duplicate spaces or mixed case letters.
	string sub = "";
	bool duplicates = false;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == ' ') {
			words[sub]++;
			if(words[sub] > 1) {
				duplicates = true;
				break;
			}
			sub = "";
		} else sub += s[i];
	}
	
	// Last word has to be added manually, because line doesn't normally end with spaces.
	words[sub]++;
	if(!duplicates) duplicates = words[sub] > 1;
	
	if(duplicates) cout << "no" << endl;
	else cout << "yes" << endl;
	
	return 0;
}