#include <iostream>
#include <set>

using namespace std;

int main() {
	int T;
	cin >> T;

	for(; T > 0; T--) {
		int n;
		cin >> n;
		
		// Sets store unique items, saving us time by now having to check if an array or vector already contains an element.
		set<string> cities;
		for(; n > 0; n--) {
			string city;
			cin >> city;
			cities.insert(city);
		}

		cout << cities.size() << endl;
	}

	return 0;
}
