#include <iostream>
#include <cmath>

using namespace std;

string imposterFormula(int i, int p) {
	int chance = round((double) i / p * 100);
	return to_string(chance) + "%";
}

int main() {
	int i, p;
	cout << "Imposter count: ";
	cin >> i;
	cout << "Player count: ";
	cin >> p;

	cout << "Chance of being an imposter: " << imposterFormula(i, p) << endl;

	return 0;
}
