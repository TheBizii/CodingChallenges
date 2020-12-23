#include <iostream>

using namespace std;

int boxSeq(int step) {
	// Pen, paper and logic are powerful tools to avoid unnecessary steps like loops and recursion.
	return (step % 2 == 0 ? step : step + 2);
}

int main() {
	int step;
	cin >> step;
	cout << boxSeq(step) << endl;

	return 0;
}
