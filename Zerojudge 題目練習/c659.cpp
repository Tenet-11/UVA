#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string connector;
	cin >> connector;

	string voc;
	getline(cin, voc);
	vector<string> vocs;

	string word;
	stringstream ss(voc); // 用stringstream依空白分詞

	while (ss >> word) {
		vocs.push_back(word);
	}

	for (int i = 0; i < vocs.size(); i++) {
		if (i == vocs.size() - 1) {
			cout << vocs[i];
		}
		else {
			cout << vocs[i] << " " << connector << " ";
		}
	}
}
