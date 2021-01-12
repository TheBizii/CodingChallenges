#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(; n > 0; n--) {
		string text1, text2;
		cin >> text1 >> text2;
		
		cout << text1 << endl;
		cout << text2 << endl;
		for(int i = 0; i < text1.length(); i++) {
			if(text1[i] == text2[i]) cout << ".";
			else cout << "*";
		}
		cout << endl << endl;
	}
	
	return 0;
}