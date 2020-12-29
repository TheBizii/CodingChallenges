#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for(; N > 0; N--) {
		int K, outlets = 0;
		cin >> K;
		for(int i = 0; i < K; i++) {
			int O;
			cin >> O;
			outlets += O;
		}
		cout << (outlets - K + 1) << endl;
	}
	
	return 0;
}