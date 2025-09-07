#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string line, conj;
	getline(cin, line);
	getline(cin, conj);

	istringstream iss(line);
	vector<string> words;
	string w;
	while (iss >> w) {
		words.push_back(w);
	}

	cout << words[0];
	for (int i = 1; i < words.size(); i++) {
		cout << " " << conj << " " << words[i];
	}
}
