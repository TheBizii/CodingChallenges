#include <iostream>

using namespace std;

bool isEqual(int num1, int num2) {
	return num1 == num2;
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << boolalpha << isEqual(num1, num2) << endl;

	return 0;
}
