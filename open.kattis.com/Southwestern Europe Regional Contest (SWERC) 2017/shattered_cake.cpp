#include <iostream>

using namespace std;

int main() {
	int W, N, area = 0;
	cin >> W >> N;

	for(; N > 0; N--) {
		int w, l;
		cin >> w >> l;
		area += (w * l);
	}
	
	cout << (area / W) << endl;
	
	return 0;
}