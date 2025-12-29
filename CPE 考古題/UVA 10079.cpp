// CPE 一星題
// CPE 考古題: 2025/12
// c024. 10079 - Pizza Cutting

#include <iostream>

using namespace std;
int main() {
	long long int n; 
	while (cin >> n) {
		long long int result = 2;
		if (n < 0)break;
		if (n == 1) {
			cout << result << '\n';
			continue;
		}
		if (n == 0) {
			cout << 1 << '\n';
			continue;
		}

		for (long long int i = 2; i <= n; i++) {
			result += i;
		}
		cout << result << '\n';
	}
}
