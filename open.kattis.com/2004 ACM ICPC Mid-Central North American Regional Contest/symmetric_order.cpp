#include <iostream>

int main() {
	int set = 1;
	while(true) {
		int n;
		std::cin >> n;
		if(n == 0) break;
		
		std::string arr[n];
		for(int i = 0; i < n / 2; i++) {
			std::cin >> arr[i];
			std::cin >> arr[n - i - 1];
		}
		if(n % 2 != 0) {
			std::cin >> arr[n / 2];
		}
		std::cout << "SET " << set << std::endl;
		for(int i = 0; i < n; i++) {
			std::cout << arr[i] << std::endl;
		}
		set++;
	}
	
	return 0;
}