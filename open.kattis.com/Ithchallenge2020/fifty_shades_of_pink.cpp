#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int sessions = 0;
	for(; N > 0; N--) {
		string color;
		cin >> color;
		transform(color.begin(), color.end(), color.begin(), ::tolower);
		if(color.find("pink") != string::npos || color.find("rose") != string::npos) {
			sessions++;
		}
	}
	
	if(sessions == 0) {
		cout << "I must watch Star Wars with my daughter" << endl;
	} else cout << sessions << endl;
	
	return 0;
}