// CPE 一星題
// e510. 10056 - What is the Probability?

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 數學: 二項式分布 + 無窮級數
int main() {
	int S;
	cin >> S;

	for (int k = 0; k < S; k++) {
		int N;
		long double p;
		int i; // 總玩家數中第i個玩家

		cin >> N >> p >> i;

		// 我就差一個0的特殊情況沒討論
		if (p == 0) {
			cout << fixed << setprecision(4) << 0.0 << endl;
			continue;
		}

		double r = pow(1 - p, N);
		double S = 1 / (1 - r);
		double ans = pow(1 - p, i - 1) * p * S;
		printf("%.4f\n", ans);
	}
}
