// Solution of the task.
// Instructions are available in 202011_sl.md.

#include <iostream>
#include <string>

using namespace std;

int main() {
	string in = "", out = "";
	// Read the input string
	getline(cin, in);
	
	// This variable is used for adding the numbers together.
	int var = 1;

	// The sum of all numbers.
	int sum = 0;

	// Go through every character in the string until we hit a \0 character, which terminates the string in C.
	for(int i = 0; in[i] != '\0'; i++) {
		if(in[i] == '-') {
			var++;
		} else if (in[i] == '*') {
			out = out.append(to_string(var) + " + ");
			sum += var;
		}

	}

	// Remove the last "+ "
	out = out.substr(0, out.length() - 2);

	// Done, print the output.
	cout << out << "= " << sum;

	return 0;
}
