#include <iostream>

using namespace std;

int main() {
	// https://artofmemory.com/blog/how-to-calculate-the-day-of-the-week-4203.html
	int yearCode = (9 + (9 % 4)) % 7;
	int day, month;
	cin >> day >> month;
	int monthCodes[12]{0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
	int centuryCode = 6;
	
	string days[7]{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int d = (yearCode + monthCodes[month - 1] + centuryCode + day) % 7;
	
	cout << days[d] << endl;
	
	return 0;
}