#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(; T > 0; T--) {
		int n = 0, prev = 0, lowerBound = 0;
		while(true) {
			prev = n;
			cin >> n;
			if(n != 0) {
				if(2 * prev < n) {
					lowerBound += (n - 2 * prev);
				}
			} else break;
		}
		cout << --lowerBound << endl;
	}
	
	return 0;
}