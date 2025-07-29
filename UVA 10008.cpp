// CPE 一星題
// c044. 10008 - What's Cryptanalysis


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();
	string s[100];
	map<char, int>counter;

	for (int i = 0; i < test; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < test; i++) {
		for (char ch : s[i]) {
			if (isalpha(ch)) {
				ch = toupper(ch);
				counter[ch]++;
			}
		}
	}

	// 把map的內容丟到vector
	vector<pair<char, int>> items(counter.begin(), counter.end());
	// 這一段sort有點意思，要會
	sort(items.begin(), items.end(), [](auto a, auto b) {
		if (a.second != b.second) {
			return a.second > b.second;
		}
		return a.first < b.first; }
	);

	for (auto p : items) {
		cout << p.first << " " << p.second << endl;
	}
}
