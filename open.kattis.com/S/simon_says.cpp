#include <iostream>
#include <limits>

using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();
	for(; N > 0; N--) {
		string command;
		cin.clear();
		getline(cin, command);
		int i = command.find("Simon says");
		if(i == 0) {
			// "Simon says" is ten characters long.
			command = command.replace(i, 10, "");
			cout << command << endl;
		}
	}
	
	return 0;
}