#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, X = 0;
	cin >> N;

	for(int i = 0; i < N; i++) {
		int P;
		cin >> P;
		X += pow((P / 10), P % 10);
	}

	cout << X << endl;

	return 0;
}
