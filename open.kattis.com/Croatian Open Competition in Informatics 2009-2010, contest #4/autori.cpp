#include <iostream>

using namespace std;

string shortConvention(string longConvention) {
	if(longConvention.length() == 0) return "";

	string shortConvention;
	shortConvention += longConvention[0];
	for(int i = 1; i < longConvention.length(); i++) {
		if(longConvention[i] == '-') 
			shortConvention += longConvention[i + 1];
	}

	return shortConvention;
}

int main() {
	string longConvention = "";
	cin >> longConvention;

	cout << shortConvention(longConvention) << endl;

	return 0;
}
