#include <iostream>

using namespace std;

int animals(int chickens, int cows, int pigs) {
	return (2 * chickens) + (4 * (cows + pigs));
}

int main() {
	int chickens, cows, pigs;
	cin >> chickens >> cows >> pigs;
	cout << animals(chickens, cows, pigs) << endl;

	return 0;
}
