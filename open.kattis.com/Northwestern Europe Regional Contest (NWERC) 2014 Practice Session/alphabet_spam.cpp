#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string txt;
	cin >> txt;
	double whitespace = 0, uppercase = 0, lowercase = 0, symbol = 0;
	
	for(int i = 0; i < txt.length(); i++) {
		if(txt[i] == '_') whitespace++;
		else if(isupper(txt[i])) uppercase++;
		else if(islower(txt[i])) lowercase++;
		else symbol++;
	}
	
	whitespace /= txt.length();
	lowercase /= txt.length();
	uppercase /= txt.length();
	symbol /= txt.length();
	
	cout << fixed << setprecision(16);
	cout << whitespace << endl;
	cout << lowercase << endl;
	cout << uppercase << endl;
	cout << symbol << endl;
	
	return 0;
}