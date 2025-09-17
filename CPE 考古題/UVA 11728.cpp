// CPE 一星題
// CPE 考古題: 2021/12
// e629. 11728 - Alternate Task

#include <iostream>
#include <cmath>
using namespace std;

int f_sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) sum += i;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s;
	int count = 0;
	while (cin >> s) {
		bool check = false;
		if (s == 0)break;
		if (s == 1) {
			cout << "Case " << ++count << ": " << 1 << '\n';
			continue;
		}

		for (int i = s - 1; i >= 2; i--) {
			int x = f_sum(i);
			if (x == s) {
				cout << "Case " << ++count << ": " << i << '\n';
				check = true;
				break;
			}
		}
		if (check) {
			continue;
		}
		else {
			cout << "Case " << ++count << ": " << -1 << '\n';
		}
	}
}
