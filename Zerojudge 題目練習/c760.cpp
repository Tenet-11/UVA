#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// toupper把小寫變大寫
int main() {
	string line;
	getline(cin, line);

	stringstream ss(line);
	string word;
	vector<string>words;

	while (ss >> word) {
		words.push_back(word);
	}

	for (int i = 0; i < words.size(); i++) {
		for (char &c : words[i]) {
			c = toupper(c);
			break;
		}
		cout << words[i] << endl;
	}
}
