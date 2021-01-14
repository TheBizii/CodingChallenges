#include <iostream>

using namespace std;

int main() {
	string message;
	cin >> message;
	int length = message.length();
	int rot1 = 0, rot2 = 0;
	for(int i = 0; i < length; i++) {
		if(i < length / 2) {
			rot1 += (int)message[i] - 'A';
		}
		else {
			rot2 += (int)message[i] - 'A';
		}
	}
	
	length /= 2;
	rot1 %= 26;
	rot2 %= 26;
	for(int i = 0; i < length; i++) {
		char c1 = 'A' + ((int)message[i] - 'A' + rot1) % 26;
		char c2 = 'A' + ((int)message[i + length] - 'A' + rot2) % 26;
		char c3 = 'A' + ((c1 - 'A') + (c2 - 'A')) % 26;
		cout << c3;
	}

	return 0;	
}