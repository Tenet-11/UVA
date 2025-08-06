// CPE 一星題
// d255. 11417 - GCD

#include <iostream>
using namespace std;

int GCD(int &a, int &b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	int gcd = 0;
	for (int i = a; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
			break;
		}
	}
	return gcd;
}

int main() {
	int N;
	while (cin >> N) {
		if (N == 0)break;

		int G = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j <= N; j++) {
				G += GCD(i, j);
			}
		}
		cout << G << endl;
	}	
}

// 好像可以加速，有空再研究
