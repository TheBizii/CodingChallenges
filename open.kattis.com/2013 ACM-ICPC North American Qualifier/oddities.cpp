#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(; n > 0; n--) {
		int x;
		cin >> x;
		if(x % 2 == 0) cout << x << " is even" << endl;
		else cout << x << " is odd" << endl;
	}
	
	return 0;
}