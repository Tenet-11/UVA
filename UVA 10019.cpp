// CPE 一星題
// e545. 10019 - Funny Encryption Method

#include <iostream>

using namespace std;

int  binary(int num) {
	int count = 0;
	while (num != 0) {
		int a = num % 2;
		num /= 2;
		if (a == 1) {
			count++;
		}
	}
	return count;
}

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int N1;
		cin >> N1;
		int original_N1 = N1;

		int decimal_N1 = 0;
		int degit = 1;
		while (N1 != 0) {
			int a = N1 % 10;
			N1 /= 10;
			decimal_N1 += degit * a;
			degit *= 16;
		}

		cout << binary(original_N1);
		cout << " " << binary(decimal_N1) << endl;
	}
	
}
