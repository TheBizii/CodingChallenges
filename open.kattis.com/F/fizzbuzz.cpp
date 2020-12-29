#include <iostream>

using namespace std;

int main() {
	int X, Y, N;
	cin >> X >> Y >> N;
	
	for(int i = 1; i <= N; i++) {
		bool fizz {i % X == 0}, buzz {i % Y == 0};
		
		if(!fizz && !buzz) cout << i;
		else {
			if(fizz) cout << "Fizz";
			if(buzz) cout << "Buzz";
		}
		
		cout << endl;
	}
	
	return 0;
}