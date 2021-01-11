#include <iostream>

using namespace std;

int main() {
	string Y, P;
	cin >> Y >> P;
	
	int yLength = Y.length() - 1;
	if (Y[yLength] == 'e') {
		cout << Y << "x" << P << endl;
	} else if (Y[yLength] == 'a' || Y[yLength] == 'i' || Y[yLength] == 'o' || Y[yLength] == 'u') {
		Y[yLength] = 'e';
		cout << Y << "x" << P << endl;
	} else if (Y[yLength - 1] != 'e' && Y[yLength] != 'x') {
		cout << Y << "ex" << P << endl;
	} else {
		cout << Y << P << endl;
	}
	
	return 0;
}