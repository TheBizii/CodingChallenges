#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for(; N > 0; N--) {
		string cost;
		cin >> cost;
		cout << cost.length() << endl;
	}
	
	return 0;
}