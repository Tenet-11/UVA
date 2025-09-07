#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	char c1 = s[0];
	char c2 = s[s.size() - 1];

	cout << c1;
	for (int i = 2; i < s.size(); i++) {
		cout << '_';
	}
	cout << c2;
}
