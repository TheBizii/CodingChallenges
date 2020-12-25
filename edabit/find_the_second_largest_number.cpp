#include <iostream>
#include <vector>

using namespace std;

int secondLargest(vector<int> arr) {
	int max;
	for(int i = 0; i < 2; i++) {
		max = i;
		for(int j = i; j < arr.size(); j++) {
			if(arr[j] > arr[max]) {
				max = j;
			}
		}

		// Move the largest element to the first slot, so we can ignore it in the second iteration
		if(i == 0) {
			int tmp = arr[max];
			arr[max] = arr[0];
			arr[0] = tmp;
		}
	}

	return arr[max];
}

int main() {
	cout << secondLargest({ 10, 40, 30, 20, 50 }) << endl;
	cout << secondLargest({ 25, 143, 89, 13, 105 }) << endl;
	cout << secondLargest({ 54, 23, 11, 17, 10 }) << endl;
	cout << secondLargest({ 512, 211, 131, 417, 11 }) << endl;
	cout << secondLargest({ 63, 44, 11, 22, 33, 66, 65 }) << endl;

	return 0;
}
