#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	int n;
	std::cin >> n;
	
	int scores[n];
	double group = 0;
	double g = 0;
	for(int i = 0; i < n; i++) {
		std::cin >> scores[i];
		group += (scores[i] * std::pow(0.8, i));
	}
	
	for(int i = 0; i < n; i++) {
		double total = 0;
		int p = 0;
		for(int j = 0; j < n; j++) {
			if(i != j) {
				total += (scores[j] * std::pow(0.8, p));
				p++;
			}
		}
		total *= 0.2;
		g += total;
	}
	
	group *= 0.2;
	g /= n;
	
	std::cout << std::fixed << std::setprecision(10);
	std::cout << group << std::endl;
	std::cout << g << std::endl;
	
	return 0;
}