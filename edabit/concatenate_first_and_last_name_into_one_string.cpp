#include <iostream>

using namespace std;

string concatName(string firstName, string lastName) {
	return lastName + ", " + firstName;
}

int main() {
	cout << concatName("John", "Doe") << endl;
	cout << concatName("First", "Last") << endl;
	cout << concatName("A", "B") << endl;
	cout << concatName(",", ",") << endl;

	return 0;
}
