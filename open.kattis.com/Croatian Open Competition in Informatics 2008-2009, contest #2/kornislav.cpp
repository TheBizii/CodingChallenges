#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[4];
	
	for(int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + 4);
	
	// Don't get it? Don't worry, neither do I.
	cout << (arr[0] * arr[2]) << endl;
	
	return 0;
}