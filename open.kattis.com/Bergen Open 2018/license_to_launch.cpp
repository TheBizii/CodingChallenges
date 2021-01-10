#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int days = 0, junk;
	cin >> junk;
	
	for(int i = 1; i < n; i++) {
		int j;
		cin >> j;
		if(junk > j) {
			days = i;
			junk = j;
		}
	}
	
	cout << days << endl;
	
	return 0;
}