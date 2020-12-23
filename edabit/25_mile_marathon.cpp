#include <iostream>
#include <vector>

using namespace std;

bool marathonDistance(vector<int> d) {
	int sum = 0;
	for(int i = 0; i < d.size(); i++) {
		sum += abs(d[i]);
	}

	return sum == 25;
}

int main() {
	int portions;
	cout << "How many portions do you want to enter? ";
	cin >> portions;

	vector<int> d;
	cout << "Reading " << portions << " portions..." << endl;
	for(int i = 0; i < portions; i++) {
		int portion;
		cin >> portion;
		d.push_back(portion);
	}

	cout << boolalpha << "Is the marathon 25 miles long? " << marathonDistance(d) << endl;

	return 0;
}
