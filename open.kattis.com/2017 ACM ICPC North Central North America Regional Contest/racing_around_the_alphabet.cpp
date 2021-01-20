#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define _USE_MATH_DEFINES

int main() {
	int N;
	std::cin >> N;
	std::cout << std::fixed << std::setprecision(10);
	while(N) {
		std::string aphorism;
		std::cin.clear();
		std::cin.ignore();
		std::getline(std::cin, aphorism);
		
		double circumference = 60 * M_PI;
		double charDistance = circumference / 28;
		double distance = 0;
		
		for(int i = 1; i < aphorism.length() - 1; i++) {
			int currentPosition = 0;
			int destination = 0;
			int dist = 0;
			
			if(aphorism[i] == ' ') currentPosition = 26;
			else if(aphorism[i] == '\'') currentPosition = 27;
			else currentPosition = aphorism[i] - 65;
			
			if(aphorism[i + 1] == ' ') destination = 26;
			else if(aphorism[i + 1] == '\'') destination = 27;
			else destination = aphorism[i + 1] - 65;
			
			dist = std::abs(currentPosition - destination);
			
			if(dist >= dist % 28)
				dist %= 28;
				
			distance += dist;
				
			std::cout << "dist=" << distance << std::endl;
		}
		
		std::cout << (distance * charDistance / 15) << std::endl;
		N--;
	}
	
	return 0;
}