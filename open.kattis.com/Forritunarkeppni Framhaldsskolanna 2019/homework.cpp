#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string s, char c) {
	vector<string> res;
	string sub = "";
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == c) {
			res.push_back(sub);
			sub = "";
		} else sub += s[i];
	}
	res.push_back(sub);
	
	return res;
}

int main() {
	string s;
	cin >> s;
	
	vector<string> tasks = split(s, ';');
	int res = 0;
	for(int i = 0; i < tasks.size(); i++) {
		
		// Is it a range?
		if(tasks[i].find("-") != string::npos) {
			vector<string> tmp = split(tasks[i], '-');
			int start = stoi(tmp[0]);
			int end = stoi(tmp[1]);
			res += (end - (start - 1));
		} else {
			res++;
		}
	}
	
	cout << res << endl;
	
	return 0;
}