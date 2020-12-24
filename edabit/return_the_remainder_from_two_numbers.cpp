#include <iostream>

using namespace std;

int remainder(int x, int y) {
	return x % y;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << remainder(x, y) << endl;

	return 0;
}
