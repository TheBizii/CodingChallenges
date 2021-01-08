#include <iostream>

using namespace std;

int main() {
	int X[3], Y[3];
	cin >> X[0] >> Y[0];
	int lowX = X[0], highX = X[0], lowY = Y[0], highY = Y[0];

	for(int i = 1; i < 3; i++) {
		cin >> X[i] >> Y[i];
		if(X[i] < lowX) lowX = X[i];
		if(Y[i] < lowY) lowY = Y[i];
		if(X[i] > highX) highX = X[i];
		if(Y[i] > highY) highY = Y[i];
	}

	int lX_count = 0, hX_count = 0, lY_count = 0, hY_count = 0;
	for(int i = 0; i < 3; i++) {
		if(X[i] == lowX) lX_count++;
		else hX_count++;
		if(Y[i] == lowY) lY_count++;
		else hY_count++;
	}

	if(lX_count != 2) cout << lowX << " ";
	else cout << highX << " ";
	if(lY_count != 2) cout << lowY << " ";
	else cout << highY << " ";
	
	cout << endl;
	return 0;
}
