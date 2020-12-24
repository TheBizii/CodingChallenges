#include <iostream>

using namespace std;

int howManySeconds(int hours) {
	return hours * 3600;
}

int main() {
	int hours;
	cin >> hours;
	cout << howManySeconds(hours) << endl;

	return 0;
}
