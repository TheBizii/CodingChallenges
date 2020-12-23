#include <iostream>

using namespace std;

int posCom(int n) {
	// Bitwise shift to the left for n bits.
	return 1 << n;
}

int main() {
	int n;
	cin >> n;
	cout << posCom(n) << endl;

	return 0;
}
