#include <iostream>
#include <map>

using namespace std;

int get_vote_count(map<string, int> votes) {
	return votes["upvotes"] - votes["downvotes"];
}

int main() {
	map<string, int> votes1 {{ "upvotes", 13 }, { "downvotes", 0 }};
	cout << get_vote_count(votes1) << endl;

	map<string, int> votes2 {{ "upvotes", 2 }, { "downvotes", 33 }};
	cout << get_vote_count(votes2) << endl;

	map<string, int> votes3 {{ "upvotes", 132 }, { "downvotes", 132 }};
	cout << get_vote_count(votes3) << endl;

	map<string, int> votes4 {{ "upvotes", 0 }, { "downvotes", 0 }};
	cout << get_vote_count(votes4) << endl;

	map<string, int> votes5 {{ "downvotes", 4 }, { "upvotes", 1 }};
	cout << get_vote_count(votes5) << endl;

	return 0;
}
