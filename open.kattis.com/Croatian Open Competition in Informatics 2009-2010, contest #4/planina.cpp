#include <iostream>

using namespace std;

int numOfPoints(int iterations) {
	int points = 2;
	for(int i = 0; i < iterations; i++) {
		points = points + points - 1;
	}
	
	return points * points;
}

int main() {
	int iterations;
	cin >> iterations;

	cout << numOfPoints(iterations) << endl;

	return 0;
}
