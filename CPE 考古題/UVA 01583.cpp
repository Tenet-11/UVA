// CPE 一星題
// CPE 考古題: 2019/03/26
// e558. 01583 - Digit Generator

#include <iostream>
using namespace std;

int sumDigits(int n) {
	int s = 0;
	while (n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}
int numDigits(int n) {
	int d = 0;
	while (n != 0) {
		d++;
		n /= 10;
	}
	return d;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		int d = numDigits(n);

		int ans = 0;
		bool check = false;
		for (int i = n - 9 * d; i <= n - 1; i++) {
			if (i + sumDigits(i) == n) {
				ans = i;
				check = true;
				break;
			}
		}

		if (check) {
			cout << ans << '\n';
		}
		else cout << 0 << '\n';
	}
}
