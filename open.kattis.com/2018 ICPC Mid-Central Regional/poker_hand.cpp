#include <iostream>
#include <map>

using namespace std;

int main() {
	map<char, int> s;
	int max = 0;
	for(int i = 0; i < 5; i++) {
		string card;
		cin >> card;
		s[card[0]]++;
		if(max < s[card[0]]) max = s[card[0]];
	}
	
	cout << max << endl;
	
	return 0;
}