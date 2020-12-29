#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(; T > 0; T--) {
		int N;
		cin >> N;
		
		int digit = 1;
		// If N is equal to or greater than 5, the last digit of its factorial seems to always be 0.
		if(N == 2 || N == 4) digit = N;
		else if(N == 3) digit = 6;
		else if(N >= 5) digit = 0;
		
		cout << digit << endl;
	}
	
	return 0;
}