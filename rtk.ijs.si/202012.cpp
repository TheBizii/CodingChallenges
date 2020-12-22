#include <iostream>

using namespace std;

void checkCodeValidity(int code) {
	bool rule1 = true, rule2 = true, rule3 = true, rule4 = true;
	int digit = -1;
	int digitOccurences[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	// The code must be 6 digits long.
	for(int i = 0; i < 6; i++) {
		int previousDigit = digit;
		digit = code % 10;
		code = code / 10;

		// Check if the current digit meets the first rule.
		if(digit < 1 || digit > 8) rule1 = false;

		// Compare current digit with the previous, if this is not the first digit we're processing.
		if(i > 0) {
			int difference = abs(digit - previousDigit);

			// Do these two digits meet the second rule?
			if(difference > 5) rule2 = false;

			// Do these two digits meet the third rule?
			if(difference == 0) rule3 = false;

		}

		// If any digit repeats more than twice, the rule is not met.
		digitOccurences[digit]++;
		if(digitOccurences[digit] > 2) rule4 = false;
	}

	cout << "Rule 1 met? " << rule1 << " (0 = false, 1 = true)" << endl;
	cout << "Rule 2 met? " << rule2 << " (0 = false, 1 = true)" << endl;
	cout << "Rule 3 met? " << rule3 << " (0 = false, 1 = true)" << endl;
	cout << "Rule 4 met? " << rule4 << " (0 = false, 1 = true)" << endl;
}

int main() {
	int code;
	cin >> code;
	checkCodeValidity(code);
	return 0;
}
