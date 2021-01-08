#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double X;
	cin >> X;
	
	X = X * (5280.0 / 4854) * 1000;
	
	cout << setprecision(10) << round(X) << endl;
	
	return 0;
}