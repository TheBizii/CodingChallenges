#include <iostream>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	
	M -= 45;
	if(M < 0) {
		M = 60 + M;
		H--;
		if(H < 0) H = 23;
	}
	
	cout << H << " " << M << endl;
	
	return 0;
}