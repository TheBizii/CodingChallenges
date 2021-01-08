#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	char answers[n];
	int correct = 0;
	for(int i = 0; i < n; i++) {
		cin >> answers[i];
		if(i > 0) {
			if(answers[i] == answers[i - 1]) correct++;
		}
	}

	cout << correct << endl;

	return 0;
}
