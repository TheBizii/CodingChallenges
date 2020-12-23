#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> sub(vector<vector<int>> A1, vector<vector<int>> A2) {
	vector<vector<int>> A3;
	int rows = A1.size(), cols = A1[0].size();
	for(int i = 0; i < rows; i++) {
		vector<int> row;
		for(int j = 0; j < cols; j++) {
			row.push_back(A1[i][j] - A2[i][j]);
		}
		A3.push_back(row);
	}

	return A3;
}

int main() {
	int rows, cols;
	cout << "How many rows will a matrix have? ";
	cin >> rows;
	cout << "How many columns will a matrix have? ";
	cin >> cols;
	vector<vector<int>> A1, A2, A3;

	cout << endl << "Let's start with the first matrix!" << endl;
	for(int i = 0; i < rows; i++) {
		vector<int> row;
		for(int j = 0; j < cols; j++) {
			cout << "Enter the " << (j + 1) << ". number in row #" << (i + 1) << ": ";
			int num;
			cin >> num;
			row.push_back(num);
		}
		A1.push_back(row);
	}

	cout << endl << "Let's start with the second matrix!" << endl;
	for(int i = 0; i < rows; i++) {
		vector<int> row;
		for(int j = 0; j < cols; j++) {
			cout << "Enter the " << (j + 1) << ". number in row #" << (i + 1) << ": ";
			int num;
			cin >> num;
			row.push_back(num);
		}
		A2.push_back(row);
	}

	cout << endl;
	A3 = sub(A1, A2);
	cout << "If we subtract both matrices, we get: " << endl;
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cout << A3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
