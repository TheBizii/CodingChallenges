#include <iostream>

using namespace std;

// Using integers to represent factorials is not a good idea, because factorials grow very quickly.
// When dealing with them, use 'long', 'unsigned long' or any other data type that can store huge numbers.
// In this case, Edabit defined the function to return an integer.
int factorial(int n) {
	if(n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n) << endl;

	return 0;
}
