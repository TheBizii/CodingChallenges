#include <iostream>

int main() {
	int e, f, c;
	std::cin >> e >> f >> c;
	
	e += f;
	int bottles = 0;
	while(e >= c) {
		// Tim sold c bottles
		e -= c;
		// in return he got one new soda bottle
		bottles++;
		// and then drank that soda so he has an additional empty bottle.
		e++;
	}
	
	std::cout << bottles << std::endl;
	
	return 0;
}