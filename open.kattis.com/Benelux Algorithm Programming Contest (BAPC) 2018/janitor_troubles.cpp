#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	int s1, s2, s3, s4;
	std::cin >> s1 >> s2 >> s3 >> s4;
	
	// Brahmagupta's formula
	double o = (s1 + s2 + s3 + s4) / 2.0d;
	double res = sqrt((o - s1) * (o - s2) * (o - s3) * (o - s4));
	
	std::cout << std::fixed << std::setprecision(15) << res << std::endl;
	
	return 0;
}