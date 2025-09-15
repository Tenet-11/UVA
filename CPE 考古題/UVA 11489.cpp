// CPE 二星題
// CPE 考古題: 2021/3
// f710. 11489 - Integer Game

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	int count = 0;
	while (T--) {
		string s;
		cin >> s;
		int c0 = 0, c1 = 0, c2 = 0;
		int sum = 0;
		if (s.size() == 1) {
			cout << "Case " << ++count << ": S\n";
			continue;
		}

		for (auto c : s) {
			sum += (c - '0');
			if ((c - '0') % 3 == 0) {
				c0++;
			}
			else if ((c - '0') % 3 == 1) {
				c1++;
			}
			else c2++;
		}

		if (sum % 3 == 0) {
			if (c0 % 2 == 0) {
				cout << "Case " << ++count << ": T\n";
			}
			else {
				cout << "Case " << ++count << ": S\n";
			}
		}
		else if (sum % 3 == 1) {
			if (c1 > 0) {
				if (c0 % 2 == 0) {
					cout << "Case " << ++count << ": S\n";
				}
				else {
					cout << "Case " << ++count << ": T\n";
				}
			}
			else {
				cout << "Case " << ++count << ": T\n";
			}
		}
		else {
			if (c2 > 0) {
				if (c0 % 2 == 0) {
					cout << "Case " << ++count << ": S\n";
				}
				else {
					cout << "Case " << ++count << ": T\n";
				}
			}
			else {
				cout << "Case " << ++count << ": T\n";
			}
		}
	}
}
