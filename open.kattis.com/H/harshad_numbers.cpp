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
	int n;
	cin >> n;
	while(n % sumOfDigits(n) > 0) {
		n++;
	}
	cout << n << endl;

	return 0;
}
