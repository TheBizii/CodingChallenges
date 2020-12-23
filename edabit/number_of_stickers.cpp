#include <iostream>

using namespace std;

int howManyStickers(int n) {
	return 6 * n * n;
}

int main() {
	int n;
	cin >> n;
	cout << howManyStickers(n) << endl;

	return 0;
}
