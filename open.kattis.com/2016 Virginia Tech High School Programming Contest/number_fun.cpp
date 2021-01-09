#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for(; N > 0; N--) {
		int a, b;
		double c;
		cin >> a >> b >> c;
		
		if((a + b) == c || (a - b) == c || (b - a) == c || (a * b) == c || ((double) a / b) == c || ((double) b / a) == c) cout << "Possible" << endl;
		else cout << "Impossible" << endl;
	}
	
	return 0;
}