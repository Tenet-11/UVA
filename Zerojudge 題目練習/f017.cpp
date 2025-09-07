#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	char c1 = s[0];
	cout << c1;
	for (int i = 1; i < s.size(); i++) {
		cout << "-" << s[i];
	}
}
