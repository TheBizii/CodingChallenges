#include <iostream>

using namespace std;

int triArea(int base, int height) {
	return (base * height) / 2;
}

int main() {
	int base, height;
	cin >> base >> height;
	cout << triArea(base, height) << endl;

	return 0;
}
