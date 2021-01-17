#include <iostream>

int main() {
	int P;
	std::cin >> P;
	while(P) {
		int K, N, pos = 0, odd = 0, even = 0;
		std::cin >> K >> N;
		
		even = (N * (N + 1));
		odd = N * N;
		
		if(even == 1) pos = 1;
		else pos = even / 2;
		
		std::cout << K << " " << pos << " " << odd << " " << even << std::endl;
		P--;
	}
	
	return 0;
}