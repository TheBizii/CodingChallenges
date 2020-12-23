#include <iostream>

using namespace std;

int calculate(int num1, int num2, char op) {
	switch(op) {
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		case '%':
			return num1 % num2;
			break;
		default:
			return 0;
			break;
	}
}

int main() {
	int num1, num2;
	char op;
	cin >> num1 >> num2;
	cin >> op;
	cout << calculate(num1, num2, op) << endl;

	return 0;
}
