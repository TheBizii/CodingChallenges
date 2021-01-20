#include <iostream>
#include <cmath>

int main() {
	int N, Q;
	std::cin >> N >> Q;
	
	int locations[N];
	for(int i = 0; i < N; i++) {
		std::cin >> locations[i];
	}
	
	for(int i = 0; i < Q; i++) {
		int req, a, b;
		std::cin >> req >> a >> b;
		if(req == 1) {
			locations[--a] = b;
		} else if(req == 2) {
			std::cout << std::abs(locations[--a] - locations[--b]) << "\n";
		}
	}
	
	return 0;
}