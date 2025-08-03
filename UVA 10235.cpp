// CPE 一星題
// d387. 10235 - Simply Emirp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime(long long int num) {
	bool check = true;
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; i++)  { // ex:至少跑到根號n大小，但我把範圍稍微寫寬
		if (num % i == 0) {
			check = false;
			break;
		}
	}
	return check;
}


int main() {
	long long int n;
	while (cin >> n) {
		long long int original_n = n;
		vector<long long int> digit;
		int count_digit = 0;

		bool prime_or_not = prime(n);
		while (n != 0) {
			int x = n % 10;
			digit.push_back(x);
			count_digit++;
			n /= 10;
		}

		int emirp = 0;
		for (int i = 0; i <count_digit; i++) {
			emirp *= 10;
			emirp += digit[i];
		}
		bool emirp_or_not = prime(emirp);


		if (prime_or_not && emirp_or_not && emirp != original_n) { // emirp的前提是他本身也要是prime
			cout << original_n << " is emirp." << endl;
		}
		else if (prime_or_not == false) {
			cout << original_n << " is not prime." << endl;
		}
		else cout << original_n << " is prime." << endl;
	}
}
