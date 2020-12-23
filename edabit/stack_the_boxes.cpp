#include <iostream>

using namespace std;

int stackBoxes(int n) {
	return n * n;
}

int main() {
	int n;
	cin >> n;
	cout << stackBoxes(n) << endl;

	return 0;
}
