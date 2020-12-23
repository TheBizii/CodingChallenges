#include <iostream>

using namespace std;

string missingAngle(int angle1, int angle2) {
	int angle3 = 180 - angle1 - angle2;
	if(angle3 < 90) return "acute";
	else if(angle3 == 90) return "right";
	else if(angle3 > 90 && angle3 < 180) return "obtuse";

	return "";
}

int main() {
	int angle1, angle2;
	cin >> angle1 >>  angle2;
	cout << missingAngle(angle1, angle2) << endl;
	
	return 0;
}
