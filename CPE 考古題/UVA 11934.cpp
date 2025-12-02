// CPE 一星題
// CPE 考古題: 2023/5
// j031. 11934 - Magic Formula

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, L;
	while (cin >> a >> b >> c >> d >> L) {
		if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0)break;

		int count = 0;
		for (int i = 0; i <= L; i++) {
			int value = a * i * i + b * i + c;
			if (value % d == 0)count++;
		}
		cout << count << endl;
	}
}
