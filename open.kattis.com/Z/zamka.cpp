#include <iostream>

using namespace std;

int sumOfDigits(int n) {
	int sum = 0;
	while(n > 0) {
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

int main() {
	int L, D, X, N = 0, M = 0;
	cin >> L >> D >> X;

	for(; L <= D; L++) {
		if(sumOfDigits(L) == X) {
			if(N == 0) N = L;
			if(L > M) M = L;
		}
	}

	cout << N << endl;
	cout << M << endl;

	return 0;
}
