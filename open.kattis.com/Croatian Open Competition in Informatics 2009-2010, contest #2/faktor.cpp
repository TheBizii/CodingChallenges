#include <iostream>

using namespace std;

int main() {
	int A, I;
	cin >> A >> I;
	
	// I -> impact; C -> citations; A -> articles
	// I = math.ceil(C / A), therefore the value of (C / A) must be somewhere between I-1 and I.
	// I-1 < (C / A) ≤ I    ===>    (I - 1)*A < C ≤ I*A
	cout << (A * --I) + 1 << endl;

	return 0;
}
