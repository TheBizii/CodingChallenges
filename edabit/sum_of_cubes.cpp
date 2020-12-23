#include <iostream>
#include <vector>

using namespace std;

int sumOfCubes(std::vector<int> nums) {
	int sum = 0;
	for(int num : nums)
		sum += (num * num * num);

	return sum;
}

int main() {
	cout << "How many numbers do you want to enter? ";
	int count;
	cin >> count;

	cout << "Okay, enter " << count << " numbers: ";
	cin.ignore();
	vector<int> nums;
	for(int i = 0; i < count; i++) {
		int num;
		cin >> num;

		// Add num to the end of the vector
		nums.push_back(num);
	}
	
	cout << endl;
	cout << "Sum of cubes: " << sumOfCubes(nums) << endl;

	return 0;
}
