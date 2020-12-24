#include <iostream>

using namespace std;

bool lessThanOrEqualToZero(int num) {
	return num <= 0;
}

int main() {
	int num;
	cin >> num;
	cout << boolalpha << lessThanOrEqualToZero(num) << endl;

	return 0;
}
