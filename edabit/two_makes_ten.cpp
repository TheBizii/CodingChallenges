#include <iostream>

using namespace std;

bool makesTen(int a, int b) {
	return a == 10 || b == 10 || a + b == 10;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << boolalpha << makesTen(a, b) << endl;

	return 0;
}
