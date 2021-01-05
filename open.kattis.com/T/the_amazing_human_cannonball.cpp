#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

bool safe(double v0, double theta, double x1, double h1, double h2) {
	double t = x1 / (cos(theta) * v0); 
	double y = (v0 * t * sin(theta)) - (0.5 * 9.81 * t * t);
	return (h2 - y >= 1) && (y - h1 >= 1); 
}

int main() {
	int N;
	cin >> N;

	while (N > 0) {
		double v0, theta, x1, h1, h2;
		cin >> v0 >> theta >> x1 >> h1 >> h2;
		
		theta = theta / 180 * M_PI;

		if(safe(v0, theta, x1, h1, h2)) cout << "Safe" << endl;
		else cout << "Not Safe" << endl;
		
		N--;
	}

	return 0;
}
