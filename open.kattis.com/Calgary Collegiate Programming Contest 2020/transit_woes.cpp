#include <iostream>

using namespace std;

int main() {
	int s, t, n;
	cin >> s >> t >> n;

	int d[n + 1]{0};
	int b[n]{0}, c[n]{0};

	for(int i = 0; i < n + 1; i++) cin >> d[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < n; i++) cin >> c[i];

	for(int i = 0; i < n; i++) {
		// For each n, we add a walking time.
		s += d[i];

		// If we were not exactly on time, add the difference
		int mod = s % c[i];
		if(s % c[i] != 0) s += c[i] - mod;

		// Add a bus travel time.
		s += b[i];
	}

	// Add time it takes to get from the last stop to school.
	s += d[n];

	if(s > t) cout << "no" << endl;
	else cout << "yes" << endl;

	return 0;
}
