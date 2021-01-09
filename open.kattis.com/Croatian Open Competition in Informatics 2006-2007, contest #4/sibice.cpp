#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, W, H;
	cin >> N >> W >> H;
	
	double diagonal = sqrt(W * W + H * H);
	
	for(; N > 0; N--) {
		int L;
		cin >> L;
		if(L <= W || L <= H || L <= diagonal) cout << "DA" << endl;
		else cout << "NE" << endl;
	}
	
	return 0;
}