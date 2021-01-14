#include <iostream>
#include <vector>

using namespace std;

int main() {
	int R, C;
	cin >> R >> C;
	
	vector<vector<char>> map;
	for(int i = 0; i < R; i++) {
		vector<char> line;
		for(int j = 0; j < C; j++) {
			char spot;
			cin >> spot;
			line.push_back(spot);
		}
		map.push_back(line);
	}
	
	int solution[5]{0, 0, 0, 0, 0};
	
	for(int i = 0; i < R - 1; i++) {
		for(int j = 0; j < C - 1; j++) {
			int cars = 0;
			
			if(map[i][j] == 'X') cars++;
			if(map[i + 1][j] == 'X') cars++;
			if(map[i][j + 1] == 'X') cars++;
			if(map[i + 1][j + 1] == 'X') cars++;
			
			if(map[i][j] == '#') continue;
			if(map[i + 1][j] == '#') continue;
			if(map[i][j + 1] == '#') continue;
			if(map[i + 1][j + 1] == '#') continue;
			
			solution[cars]++;
		}
	}
	
	for(int i = 0; i < 5; i++) {
		cout << solution[i] << endl;
	}
	
	return 0;
}