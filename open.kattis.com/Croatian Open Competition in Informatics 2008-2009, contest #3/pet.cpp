#include <iostream>

using namespace std;

int main() {
	int contestant = 0, points = 0;
	for(int i = 1; i <= 5; i++) {
		int sum = 0;
		for(int j = 0; j < 4; j++) {
			int grade;
			cin >> grade;
			sum += grade;
		}
		
		if(sum > points) {
			contestant = i;
			points = sum;
		}
	}
	
	cout << contestant << " " << points << endl;
	
	return 0;
}