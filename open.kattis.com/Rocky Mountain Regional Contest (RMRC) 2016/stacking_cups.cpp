#include <iostream>

int main() {
	int N;
	std::cin >> N;
	
	std::string colors[N];
	double radii[N];
	int i = 0;
	while(i < N) {
		std::string C, tmpR;
		double R;
		std::cin >> C >> tmpR;
		
		try {
			R = std::stod(tmpR);
		} catch(const std::exception&) {
			R = std::stod(C);
			R /= (double)2;
			C = tmpR;
		}
		
		radii[i] = R;
		colors[i] = C;
		i++;
	}
	
	for(i = 0; i < N; i++) {
		for(int j = 0; j < N - 1; j++) {
			if(radii[i] < radii[j]) {
				std::swap(radii[i], radii[j]);
				std::swap(colors[i], colors[j]);
			}
		}
	}
	
	for(int i = 0; i < N; i++) {
		std::cout << colors[i] << std::endl;
	}
	
	return 0;
}