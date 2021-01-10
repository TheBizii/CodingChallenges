#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int expenses = 0;
	for(; N > 0; N--) {
		int number;
		cin >> number;
		if(number < 0) expenses += number;
	}
	
	cout << (expenses * -1) << endl;
	
	return 0;
}