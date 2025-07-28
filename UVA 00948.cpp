// CPE 一星題
// a134. 00948 - Fibonaccimal Base

#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int num;
		int original_num;
		cin >> num;
		original_num = num;

		int fib[44];
		int choose[44] = { 0 };
		int max_digit = 0;
		fib[0] = 1, fib[1] = 2;
		for (int i = 2; i < 44; i++) {
			fib[i] = fib[i - 1] + fib[i - 2];
		}

		for (int i = 43; i >= 0; i--) {
			if (num >= fib[i]) {
				choose[i] = 1;
				num -= fib[i];
				if (max_digit == 0) {
					max_digit = i;
				}
			}
		}
		cout << original_num << " = ";
		for (int i = max_digit; i >= 0; i--) {
			cout << choose[i];
		}
		cout << " (fib)";
		cout << endl;
	}
}
