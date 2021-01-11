#include <iostream>
#include <map>

using namespace std;

int main() {
	int N;
	cin >> N;
	map<string, string> prizes;
	
	for(; N > 0; N--) {
		string university, team;
		cin >> university >> team;
		
		if(prizes[university] == "") {
			prizes[university] = team;
			cout << university << " " << team << endl;
			if(prizes.size() >= 12) break;
		}
	}
	
	return 0;
}