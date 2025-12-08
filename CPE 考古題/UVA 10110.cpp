// CPE 一星題
// CPE 考古題: 2024/10
// d111. 10110 - Light, more light

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	while (cin >> N) {
		if (N == 0)break;

		double num = sqrt(N);
		int num2 = sqrt(N);
		if (num == num2) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}
