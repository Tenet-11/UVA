// CPE 一星題
// CPE 考古題: 2021/3
// d183. 00725 - Division

#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	while (cin >> N) {
		if (N == 0)break;
		bool found = false;
		for (int b = 1234; b <= 98765 / N; b++) {
			set<int>tp;
			int a = b * N;
			int x = a, y = b;
			if (x < 10000) {
				tp.insert(0);
			}
			if (y < 10000) {
				tp.insert(0);
			}

			while (x > 0) {
				tp.insert(x % 10);
				x /= 10;
			}
			while (y > 0) {
				tp.insert(y % 10);
				y /= 10;
			}
			if (tp.size() == 10) {
				found = true;
				cout << setw(5) << setfill('0') << a << " / " << setw(5) << setfill('0') << b << " = " << N << '\n';
			}
		}

		if (!found) {
			cout << "There are no solutions for " << N << ".\n\n";
		}
		else {
			cout << '\n' << '\n';
		}
	}
}
