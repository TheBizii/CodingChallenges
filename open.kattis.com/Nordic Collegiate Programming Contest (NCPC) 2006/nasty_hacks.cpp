#include <iostream>

using namespace std;

string advertise(int r, int e, int c) {
	if(r == e - c) return "does not matter";
	else if(r > e - c) return "do not advertise";
	else return "advertise";
}

int main() {
	int n;
	cin >> n;

	for(; n > 0; n--) {
		int r, e, c;
		cin >> r >> e >> c;

		cout << advertise(r, e, c) << endl;
	}
	return 0;
}
