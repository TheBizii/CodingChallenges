#include <iostream>

using namespace std;

int main() {
	int G, S, D, buyingPower;
	cin >> G >> S >> D;
	
	buyingPower = 3 * G + 2 * S + D;
	
	if(buyingPower >= 8) cout << "Province or ";
	else if(buyingPower >= 5) cout << "Duchy or ";
	else if(buyingPower >= 2) cout << "Estate or ";
	
	if(buyingPower >= 6) cout << "Gold";
	else if(buyingPower >= 3) cout << "Silver";
	else cout << "Copper";
	
	return 0;
}