// CPE 一星題
// CPE 考古題: 2022/3
// e635. 12908 - The book thief

#include <iostream>
using namespace std;

int main() {
	int s;
	while (cin >> s) {
		if (s == 0)break;
		int count = 0;

		for (int i = 1; i < 100000000; i++) {
			count += i;
			if (count == s) {
				cout << i + 1 << " " << i + 1 << '\n';
				break;
			}
			if (count > s) {
				int x = count - s;
				cout << x << " " << i << '\n';
				break;
			}
		}
	}
}
