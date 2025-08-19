#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	getline(cin, line);

	bool check = false;
	for (char c : line) {
		if (c == ' ') {
			if (!check) {
				cout << ' ';
			}
			check = true;
		}
		else {
			cout << c;
			check = false;
		}
	}
}
