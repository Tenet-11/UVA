#include <iostream>
using namespace std;

// 一定要用輾轉相除，不然會TLE
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}

		while (a % b) {
			int d = a % b;
			a = b;
			b = d;
		}
		cout << b << endl;
	}
}
