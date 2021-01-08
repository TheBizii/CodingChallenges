#include <iostream>

using namespace std;

int main() {
	int N;
	double QALY, q, y;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> q >> y;
		QALY += (q * y);
	}

	cout << QALY << endl;

	return 0;
}
