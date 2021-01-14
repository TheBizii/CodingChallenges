#include <iostream>

using namespace std;

int main() {
	string cipherText;
	cin >> cipherText;
	
	int i = 0;
	int days = 0;
	for(int j = 0; j < cipherText.length(); j++) {
		if(i == 0 && cipherText[j] != 'P') days++;
		else if(i == 1 && cipherText[j] != 'E') days++;
		else if(i == 2 && cipherText[j] != 'R') days++;
		
		i++;
		if(i == 3) i = 0;
	}
	
	cout << days << endl;
	
	return 0;
}