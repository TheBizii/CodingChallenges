#include <iostream>

using namespace std;

int addition(int a) {
	return ++a;
}

int main() {
	int a;
	cin >> a;
	cout << addition(a) << endl;

	return 0;
}
