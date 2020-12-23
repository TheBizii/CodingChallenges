#include <iostream>

using namespace std;

int divisibleByB(int a, int b) {
	return ((a / b) + 1) * b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << divisibleByB(a, b) << endl;

	return 0;
}
