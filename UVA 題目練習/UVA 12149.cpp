// a111. 12149 - Feynman

#include <iostream>
#include <string>
using namespace std;

// 判斷邊長為N的正方形內總共有幾個正方形的邏輯
int square(int n) {
	if (n == 0)return 0;
	if (n == 1)return 1;
	return n * n + square(n - 1);
}

int main() {
	int N;
	while (cin >> N) {
		if (N == 0)break;
		cout << square(N) << endl;
	}
}
