#include <iostream>

using namespace std;

int matchHouses(int step) {
	// It works in this case. Each house requires 6 matchsticks. Two adjacent houses share a wall, made of 1 matchstick.
	return (step * 6) - (step - 1);
}

int main() {
	int step;
	cin >> step;
	cout << matchHouses(step) << endl;

	return 0;
}
