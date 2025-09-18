// CPE 二星題
// CPE 考古題: 2022/3
// d437. 10326 - The Polynomial Equation

#include <iostream>
#include <cstring>
using namespace std;

int a[50];
int main() {
	int N;
	while (cin >> N) {
		memset(a, 0, sizeof(a));
		a[0] = 1;
		for (int i = 1; i <= N; i++) {
			int m; cin >> m;
			for (int j = i; j >= 0; j--) {
				a[j + 1] += a[j] * (-m);
			}
		}

		// 最高項
		if (N == 1)cout << "x";
		else cout << "x^" << N;
		
		// 其餘項
		for (int i = 1; i < N; i++) {
			if (a[i] == 0)continue;
			if (a[i] < 0)cout << " - ";
			else cout << " + ";

			if (abs(a[i]) != 1)cout << abs(a[i]);

			if (N - i == 1)cout << "x";
			else cout << "x^" << N - i;
		}

		// 常數項
		if (a[N] < 0)cout << " - ";
		else cout << " + ";
		cout << abs(a[N]) << " = 0\n";
	}
}
