#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;
	
	int moves = 0;
	if(B - A > C - B) moves = B - A;
	else moves = C - B;
	
	moves--;
	
	std::cout << moves << std::endl;
	
	return 0;
}