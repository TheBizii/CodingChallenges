#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	for(; N > 0; N--) {
		int b;
		double p;
		cin >> b >> p;
		
		double diff = 60.0 / p;
		double bpm = diff * b;
		
		cout << (bpm - diff) << " " << bpm << " " << (bpm + diff) << endl;
	}
}