#include <iostream>

using namespace std;

int matchHouses(int step) {
	if(step == 0) return 0;
	return (step * 6) - (step - 1);
}

int main() {
	int step;
	cin >> step;
	cout << matchHouses(step) << endl;

	return 0;
}
