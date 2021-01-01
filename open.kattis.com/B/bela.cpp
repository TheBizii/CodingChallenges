#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, vector<int>> scores {
	{'A', {11, 11}},
	{'K', {4, 4}},
	{'Q', {3, 3}},
	{'J', {20, 2}},
	{'T', {10, 10}},
	{'9', {14, 0}},
	{'8', {0, 0}},
	{'7', {0, 0}}
};

int belote(vector<string> cards, char dominantSuit) {
	int sum = 0;
	for(int i = 0; i < cards.size(); i++) {
		if(cards[i][1] == dominantSuit) sum += scores[cards[i][0]][0];
		else sum += scores[cards[i][0]][1];
	}
	
	return sum;
}

int main() {
	int N;
	char B;
	cin >> N;
	cin >> B;
	vector<string> cards;
	for(int i = 0; i < 4 * N; i++) {
		string card;
		cin >> card;
		cards.push_back(card);
	}
	
	cout << belote(cards, B) << endl;
	
	return 0;
}