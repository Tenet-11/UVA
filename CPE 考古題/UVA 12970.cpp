// CPE 一星題
// CPE 考古題: 2021/10
// h385. 12970: Alcoholic Pilots

#include <iostream>
using namespace std;

int gcd(long long int a, long long int b) {

	while (b) {
		long long int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	long long int v1, d1, v2, d2;
	int count = 0;
	while (cin >> v1 >> d1 >> v2 >> d2) {
		if (v1 == 0 && d1 == 0 && v2 == 0 && d2 == 0)break;

		long long left = d1 * v2;
		long long right = d2 * v1;

		if (left < right)
			cout << "Case #" << ++count << ": You owe me a beer!\n";
		else
			cout << "Case #" << ++count << ": No beer for the captain.\n";
		long long num = v1 * d2 + v2 * d1;
		long long den = 2 * v1 * v2;

		long long int Gcd = gcd(num, den);
		num /= Gcd, den /= Gcd;

		cout << "Avg. arrival time: ";
		if (den == 1)cout << num << '\n';
		else cout << num << "/" << den << '\n';
	}
}
