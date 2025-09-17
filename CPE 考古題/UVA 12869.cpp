// CPE 二星題
// CPE 考古題: 2021/10
// g470. 12869: Zeroes

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long int a, b;
	long long int low_zeros, high_zeros;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)break;
		low_zeros = 0;
		high_zeros = 0;
		low_zeros = low_zeros + (a / 5);
		high_zeros = high_zeros + (b / 5);
		cout << high_zeros - low_zeros + 1 << '\n';
	}
}
