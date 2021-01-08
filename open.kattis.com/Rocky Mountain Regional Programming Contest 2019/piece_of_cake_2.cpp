#include <iostream>

using namespace std;

int largestPieceVol(int cLength, int hCut, int vCut) {
	int largestH, largestV;
	largestH = (cLength - hCut < hCut ? hCut : cLength - hCut);
	largestV = (cLength - vCut < vCut ? vCut : cLength - vCut);

	return largestH * largestV * 4;
}

int main() {
	int cLength, hCut, vCut;
	cin >> cLength >> hCut >> vCut;
	cout << largestPieceVol(cLength, hCut, vCut) << endl;

	return 0;
}
