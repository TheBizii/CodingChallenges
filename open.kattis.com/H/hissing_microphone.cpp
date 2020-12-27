#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	bool hiss = str.find("ss") != string::npos;
	cout << (hiss ? "hiss" : "no hiss") << endl;

	return 0;
}
