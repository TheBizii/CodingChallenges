#include <iostream>

using namespace std;

bool divisibleByHundred(int num) {
	return num % 100 == 0;
}

int main() {
	int num;
	cin >> num;
	cout << boolalpha << divisibleByHundred(num) << endl;

	return 0;
}
