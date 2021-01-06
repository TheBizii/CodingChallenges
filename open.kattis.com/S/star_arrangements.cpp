#include <iostream>

using namespace std;

int main() {
	int S;
	cin >> S;
	
	cout << S << ":" << endl;

	int maxX = S;
	if(maxX % 2 == 0) maxX /= 2;
	else maxX = maxX / 2 + 1;
	
	for(int i = 2; i <= maxX; i++) {
		int twoRows = (2 * i - 1);
		int sec = S / twoRows; // How many two-row sections would we need to cover the majority of stars?
		if((sec * twoRows == S) || (sec * twoRows + i == S)) cout << i << "," << (i - 1) << endl;
		if(S % i == 0) cout << i << "," << i << endl;
	}

	return 0;
}
