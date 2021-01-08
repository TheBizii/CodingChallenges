#include <iostream>

using namespace std;

int main() {
	int P, K;
	cin >> P;

	for(; P > 0; P--) {
		int N;
		cin >> K;
		cin >> N;
		
		// N * (N + 3) / 2 seems to be the formula to calculate the number of candles needed.
		cout << K << " " << (N * (N + 3) / 2) << endl;
	}

	return 0;
}
