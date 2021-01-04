#include <iostream>

using namespace std;

int main() {
	string moves;
	cin >> moves;

	int numCups = 3;
	int cups[numCups] {1};

	for(int i = 0; i < moves.size(); i++) {
		if(moves[i] == 'A') swap(cups[0], cups[1]);
		else if(moves[i] == 'B') swap(cups[1], cups[2]);
		else swap(cups[0], cups[2]);
	}

	for(int i = 0; i < numCups; i++) {
		if(cups[i]) {
			cout << (i + 1) << endl;
			break;
		}
	}

	return 0;
}
