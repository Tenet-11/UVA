// CPE 二星題
// CPE 考古題: 2023/12
// m946. 11121 Base -2

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int test; cin >> test;
	int count = 0;
	for (int i = 0; i < test; i++) {
		int x; cin >> x;

		cout << "Case #" << ++count << ": ";
		if (x == 0) {
			cout << 0 << '\n';
			continue;
		}

		vector<int>bits;
		while (x != 0) {
			int q = x / -2;
			int r = x % -2;

			if (r < 0) {
				r += abs(-2);
				q++;
			}

			bits.push_back(r);
			x = q;
		}
		
		bool first = false;
		for (int i = bits.size() - 1; i >= 0; i--) {
			if (bits[i] == 0 && first == false) {
				continue;
			}
			if (bits[i] != 0 && first == false) {
				cout << bits[i];
				first = true;
				continue;
			}
			cout << bits[i];
		}
		cout << '\n';
	}
}
