#include <iostream>

using namespace std;

int main() {
	int pieces[6]{1, 1, 2, 2, 2, 8};
	for(int i = 0; i < 6; i++) {
		int piece;
		cin >> piece;
		cout << (pieces[i] - piece) << " ";
	}
	
	cout << endl;
	
	return 0;
}