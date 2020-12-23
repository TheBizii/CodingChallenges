#include <iostream>

using namespace std;

bool equalSlices(int total, int people, int each) {
	return people * each <= total;
}

int main() {
	int total, people, each;
	cin >> total, people, each;
	cout << boolalpha << equalSlices(total, people, each) << endl;

	return 0;
}
