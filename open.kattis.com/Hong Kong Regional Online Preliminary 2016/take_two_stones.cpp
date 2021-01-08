#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	string out = (N % 2 == 0 ? "Bob" : "Alice");
	cout << out << endl;

	return 0;
}
