#include <iostream>

using namespace std;

int main() {
	string cards;
	cin >> cards;
	
	int sets = 0;
	int T = 0, C = 0, G = 0;
	
	for(int i = 0; i < cards.length(); i++) {
		if(cards[i] == 'T') T++;
		else if(cards[i] == 'C') C++;
		else if(cards[i] == 'G') G++;
	}
	
	sets = T;
	if(C < sets) sets = C;
	if(G < sets) sets = G;
	
	int points = ((T * T) + (C * C) + (G * G) + (7 * sets));
	cout << points << endl;
	
	return 0;
}