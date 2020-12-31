#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	if(M < N) {
		swap(N, M);
	}

	for(int i = N + 1; i < M + 2; i++) {
		cout << i << endl;
	}

	return 0;
}
