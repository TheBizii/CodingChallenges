#include <iostream>
#include <cmath>

using namespace std;

bool abcmath(int a, int b, int c) {
	// Came to the conclusion after a few examples I did on paper.
	// Try it yourself, if you do not understand it.
	// (a * 2^b) % c
	return (int)(a * pow(2, b)) % c == 0;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << boolalpha << abcmath(a, b, c) << endl;

	return 0;
}
