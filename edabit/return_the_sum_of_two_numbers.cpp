#include <iostream>

using namespace std;

int addition(int first, int second) {
	return first + second;
}

int main() {
	int first, second;
	cin >> first >> second;
	cout << addition(first, second) << endl;

	return 0;
}
