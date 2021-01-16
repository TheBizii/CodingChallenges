#include <iostream>
#include <algorithm>
#include <map>

int main() {
	while(true) {
		int n;
		std::cin >> n;
		if(n == 0) break;
		
		int arr1[n], arr2[n], arr3[n], tmp[n];
		// Read list elements.
		for(int i = 0; i < n; i++) {
			int item;
			std::cin >> item;
			arr1[i] = item;
			tmp[i] = item;
		}
		
		// Read list elements.
		for(int i = 0; i < n; i++) {
			int item;
			std::cin >> item;
			arr2[i] = item;
		}
		
		std::sort(tmp, tmp + n);
		std::sort(arr2, arr2 + n);
		
		for(int i = 0; i < n; i++) {
			int* j = std::find(arr1, arr1 + n, tmp[i]);
			int k = std::distance(arr1, j);
			arr3[k] = arr2[i];
		}
		
		for(int i = 0; i < n; i++) {
			std::cout << arr3[i] << std::endl;
		}
		
		std::cout << std::endl;
	}
	
	return 0;
}