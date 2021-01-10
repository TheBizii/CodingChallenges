#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int h;
	double v;
	cin >> h >> v;
	
	v = v * M_PI / 180;
	
	double hip = h / sin(v);
	cout << ceil(hip) << endl;
	
	return 0;
}