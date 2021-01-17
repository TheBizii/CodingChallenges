#include <iostream>

int main() {
	int P;
	std::cin >> P;
	while(P) {
		int K, b, sum = 0;
		unsigned int n;
		std::cin >> K >> b >> n;
		while(n) {
			int digit = n % b;
			sum += digit * digit;
			n /= b;
		}
		P--;
		std::cout << K << " " << sum << std::endl;
	}
	
	return 0;
}