#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	double sum = 0; 
	int positives = 0;
	for(; n > 0; n--) {
		int atbat;
		cin >> atbat;
		if(atbat >= 0) {
			sum += atbat;
			positives++;
		}
	}
	
	cout << (sum / positives) << endl;
	
	return 0;
}