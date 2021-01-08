#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double C;
	cin >> C;
	int L;
	cin >> L;
	double totalArea = 0.0f;
	for(; L > 0; L--) {
		double w, h;
		cin >> w >> h;
		totalArea += (w * h);
	}
	
	cout << fixed << setprecision(7);
	cout << (totalArea * C) << endl;
	
	return 0;
}