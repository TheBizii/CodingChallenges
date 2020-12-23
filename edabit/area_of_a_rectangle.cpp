#include <iostream>

using namespace std;

int area(int h, int w) {
	// Invalid arguments
	if(h <= 0 || w <= 0) return -1;

	return h * w;
}

int main() {
	int h, w;
	cin >> h >> w;
	cout << area(h, w) << endl;

	return 0;
}
