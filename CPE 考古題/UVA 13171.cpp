// CPE 一星題
// CPE 考古題: 2022/3
// i860. 13171 - Pixel Art

#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int M, Y, C;
		cin >> M >> Y >> C;

		string s; cin >> s;
		for (char c : s) {
			if (c == 'M') {
				M--;
			}
			else if (c == 'Y') {
				Y--;
			}
			else if (c == 'Y') {
				Y--;
			}
			else if (c == 'C') {
				C--;
			}
			else if (c == 'R') {
				Y--;
				M--;
			}
			else if (c == 'V') {
				M--;
				C--;
			}
			else if (c == 'G') {
				Y--;
				C--;
			}
			else if (c == 'B') {
				Y--;
				C--;
				M--;
			}
			else {
				continue;
			}
		}

		if (M < 0 || Y < 0 || C < 0) {
			cout << "NO\n";
		}
		else {
			cout << "YES" << " " << M << " " << Y << " " << C << '\n';
		}
	}
}
