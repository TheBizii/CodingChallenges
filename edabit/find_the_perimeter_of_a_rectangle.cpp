#include <iostream>

using namespace std;

int findPerimeter(int length, int width) {
	return 2 * (length + width);
}

int main() {
	int length, width;
	cin >> length >> width;
	cout << findPerimeter(length, width) << endl;

	return 0;
}
