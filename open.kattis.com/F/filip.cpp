#include <iostream>

using namespace std;

int main() {
	int A, B, revA = 0, revB = 0;
	cin >> A >> B;

	int i = 100;
	// Since both are three-digit we can just check for one of them.
	while(i >= 1) {
		revA += (A % 10) * i;
		revB += (B % 10) * i;
		A /= 10;
		B /= 10;
		i /= 10;
	}

	if(revA >= revB) cout << revA << endl;
	else cout << revB << endl;

	return 0;
}
