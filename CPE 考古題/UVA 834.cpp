// CPE 一星題
// CPE 考古題: 2023/5
// k932. 00834 - Continued Fractions

#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int real_n, up_n, down_n;
		
		if (a == 1) {
			cout << "[0;" << b << "]\n";
			continue;
		}
		if (a == 0 || b == 0) {
			cout << "[0]\n";
			continue;
		}

		real_n = a / b;
		down_n = b;
		up_n = a % b;

		cout << "[" << real_n << ";";
		while (1) {
			a = down_n; b = up_n;
			if (up_n == 1) {
				cout << down_n;
				break;
			}

			real_n = a / b;
			down_n = b;
			up_n = a % b;
			if (down_n == 0 || up_n == 0) {
				cout << real_n;
				break;
			}
			cout << real_n << ",";
		}
		cout << "]\n";
	}
}
