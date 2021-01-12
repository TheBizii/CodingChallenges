#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	for(; N > 0; N--) {
		string ciphertext;
		cin >> ciphertext;
		int sq = (int)sqrt(ciphertext.length());
		for(int i = sq - 1; i >= 0; i--) {
			for(int j = 0; j < sq; j++) {
				cout << ciphertext[i + (sq * j)];
			}
		}
		cout << endl;
	}
	
	return 0;
}