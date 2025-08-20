#include <iostream>
using namespace std;

int palindrome(int n) {
	int reverse = 0;
	while (n > 0) {
		reverse *= 10;
		reverse += n % 10;
		n /= 10;
	}
	return reverse;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; int count = 0; int original_n = n;
		int reverse = palindrome(n);
		do {
			count++;
			n = n + reverse;
			reverse = palindrome(n);
		} while (n != reverse);
		cout << count << " " << n<< endl;
	}
}

// 題目有個小陷阱是至少做一次reverse，這我沒注意到
