#include <iostream>

using namespace std;

int main() {
	int L, x;
	cin >> L >> x;
	
	int disallowed = 0;
	int currentPeople = 0;
	for(; x > 0; x--) {
		string event;
		int p;
		cin >> event >> p;
		if(event == "enter") {
			if(currentPeople + p > L) {
				disallowed++;
			} else currentPeople += p;
		} else if(event == "leave") {
			currentPeople -= p;
		}
	}
	
	cout << disallowed << endl;
}