#include <iostream>

int main() {
	int n;
	std::cin >> n;
	while(n != -1) {
		int s, t, prevT = 0, miles = 0;
		while(n) {
			std::cin >> s >> t;
			if(prevT != 0) {
				miles += (s * (t - prevT));
			}
			else {
				miles += (s * t);
			}
			
			prevT = t;
			n--;
		}
		std::cout << miles << " miles\n";
		std::cin >> n;
	}
	
	return 0;
}