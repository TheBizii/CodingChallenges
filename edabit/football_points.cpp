#include <iostream>

using namespace std;

int footballPoints(int wins, int draws, int losses) {
	return (wins * 3) + draws;
}

int main() {
	int wins, draws, losses;
	cin >> wins >> draws >> losses;
	cout << footballPoints(wins, draws, losses) << endl;

	return 0;
}
