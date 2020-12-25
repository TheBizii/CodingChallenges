#include <iostream>
#include <vector>

using namespace std;

bool changeEnough(vector<int> change, float amountDue) {
	float total = (change[0] * 0.25f) + (change[1] * 0.1f) + (change[2] * 0.05f) + (change[3] * 0.01f);
	return total >= amountDue;
}

int main() {
	cout << boolalpha;
	cout << changeEnough({ 0, 0, 20, 5 }, 0.75) << endl;
	cout << changeEnough({ 30, 40, 20, 5 }, 12.55) << endl;
	cout << changeEnough({ 1, 0, 2555, 219 }, 127.75) << endl;
	cout << changeEnough({ 1, 335, 0, 219 }, 35.21) << endl;
	cout << changeEnough({ 2, 100, 0, 0 }, 14.11) << endl;
	cout << changeEnough({ 10, 0, 0, 50 }, 13.85) << endl;
	cout << changeEnough({ 1, 0, 5, 219 }, 19.99) << endl;

	return 0;
}
