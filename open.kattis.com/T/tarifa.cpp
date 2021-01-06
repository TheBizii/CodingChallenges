#include <iostream>

using namespace std;

int main() {
	int X, N;
	cin >> X >> N;
	X *= N + 1;

	for(; N > 0; N--) {
		int P;
		cin >> P;
		X -= P;
	}

	cout << X;

	return 0;
}
