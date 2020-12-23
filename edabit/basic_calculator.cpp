#include <iostream>

using namespace std;

int calculator(int num1, char op, int num2) {
	switch(op) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '/':
			if(num2 == 0) return 0;
			else return num1 / num2;
		case '*':
			return num1 * num2;
		default:
			return 0;
	}
}

int main() {
	int num1, num2;
	char op;
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Operation (+, -, / or *): ";
	cin >> op;

	cout << calculator(num1, op, num2);

	return 0;
}
