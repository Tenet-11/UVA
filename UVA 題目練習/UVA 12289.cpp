// a466. 12289 - One-Two-Three

#include <iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		string s; cin >> s;
		if (s.size() == 5) {
			cout << 3 << '\n';
			continue;
		}
		if (s[0] == 'o') {
			if (s[1] == 'n' || s[2] == 'e') {
				cout << 1 << '\n';
			}
			else cout << 2 << '\n';

			continue;
		}
		if (s[1] == 'n' && s[2] == 'e') {
			cout << 1 << '\n';
			continue;
		}
		cout << 2 << '\n';
	}
}
