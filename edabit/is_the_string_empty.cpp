#include <iostream>

using namespace std;

bool isEmpty(string str) {
	return str.empty();
}

int main() {
	// Couldn't find a way to enter an empty string through terminal, so I just demonstrated it.
	cout << boolalpha << isEmpty("") << endl;

	return 0;
}
