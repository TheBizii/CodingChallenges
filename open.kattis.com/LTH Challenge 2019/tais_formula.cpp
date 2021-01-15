#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int prevT;
	double prevV, res = 0;
	cin >> prevT >> prevV;
	
	for(--N; N > 0; N--) {
		int t;
		double v;
		cin >> t >> v;
		res += ((prevV + v) / 2 * (t - prevT)) / 1000;
		prevT = t;
		prevV = v;
	}
	
	cout << fixed << setprecision(5);
	cout << res;
	
	return 0;
}