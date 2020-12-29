#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(; t > 0; t--) {
		vector<int> ascSortedSpots;
		int n;
		cin >> n;
		for(; n > 0; n--) {
			int x;
			cin >> x;
			int index = 0;;
			if(ascSortedSpots.size() != 0) {
				for(; index < ascSortedSpots.size(); index++) {
					if(ascSortedSpots[index] > x) {
						break;
					}
				}
			}
			
			ascSortedSpots.insert(ascSortedSpots.begin() + index, x);
		}
		// Output the minimum walking distance required (two-way).
		cout << (ascSortedSpots[ascSortedSpots.size() - 1] - ascSortedSpots[0]) * 2 << endl;
	}
	
	return 0;
}