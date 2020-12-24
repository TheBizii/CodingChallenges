#include <iostream>

using namespace std;

int points(int twoPointers, int threePointers) {
	return (3 * threePointers) + (2 * twoPointers);
}

int main() {
	int twoPointers, threePointers;
	cin >> twoPointers >> threePointers;
	cout << points(twoPointers, threePointers) << endl;

	return 0;
}
