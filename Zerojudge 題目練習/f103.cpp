#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, cut;
	cin >> num >> cut;

	vector<string> cards;
	for (int i = 0; i < num; i++) {
		string s; cin >> s;
		cards.push_back(s);
	}

	for (int i = cut; i < cards.size(); i++) {
		cout << cards[i] << '\n';
	}
	for (int i = 0; i < cut; i++) {
		if (i == cut-1)cout << cards[i];
		else {
			cout << cards[i] << '\n';
		}
	}
	
}
