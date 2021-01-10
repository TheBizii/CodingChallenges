#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> distinctModulos;
	
	for(int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		distinctModulos.insert(num % 42);
	}
	
	cout << distinctModulos.size() << endl;
	
	return 0;
}