#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double N;
	cin >> N;
	
	cout << fixed << setprecision(6);
	N = pow(N, 1/N);
	cout << N << endl;
	
	return 0;
}