// CPE 二星題
// CPE 考古題:2024/4月
// n684. 01118 - Binary Stirling Numbers


#include <iostream>
using namespace std;

int Smod[1001][1001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 只有1種方式: 甚麼都不做 ( 空集合 )
	Smod[0][0] = 1;

	for (int n = 1; n <= 1000; n++) {
		for (int m = 1; m <= n; m++) {
			int a = Smod[n - 1][m];
			int b = Smod[n - 1][m - 1];

			// Strling數的演算法
			Smod[n][m] = ((m % 2) * a + b) % 2;
		}
	}

	int test; cin >> test;
	while (test--) {
		int n, m;
		cin >> n >> m;

		cout << Smod[n][m] << '\n';
		if (test != 1) {
			cout << '\n';
		}
	}
}
