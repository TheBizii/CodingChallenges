#include <iostream>

using namespace std;

int main() {
	bool blimps[5]{0, 0, 0, 0, 0};
	int count = 0;
	for(int i = 0; i < 5; i++) {
		string reg;
		cin >> reg;
		if(reg.find("FBI") != string::npos) {
			count++;
			blimps[i] = true;
		}
	}
	
	if(count == 0) cout << "HE GOT AWAY!" << endl;
	else {
		for(int i = 0; i < 5; i++) {
			if(blimps[i]) cout << (i + 1) << " ";
		}
		cout << endl;
	}
	
	return 0;
}