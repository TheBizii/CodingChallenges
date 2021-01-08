#include <iostream>
#include <deque>
#include <cmath>

using namespace std;

deque<bool> toBinary(int n) {
	deque<bool> res;
	while(n > 0) {
		res.push_front(n % 2 != 0);
		n /= 2;
	}
	return res;
}

int toDecimal(deque<bool> bitset) {
	int res = 0;
	for(int i = 0; i < bitset.size(); i++) {
		if(bitset[i]) res += pow(2, i);
	}
	return res;
}

int main() {
	int N;
	cin >> N;
	
	cout << toDecimal(toBinary(N)) << endl;
	
	return 0;
}