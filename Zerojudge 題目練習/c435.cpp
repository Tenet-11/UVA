#include <iostream>
using namespace std;

int Max(int a, int b) {
	if (a >= b)return a;
	else return b;
}

int main() {
	int n;
	cin >> n;
	long long x;
	cin >> x;
	long long max = x;
	long long ans = -10000000;

	for (int i = 1; i < n; i++) {
		cin >> x;
		ans = Max(ans, max - x);
		max = Max(max, x); // 更新目前最大值
	}
	cout << ans;
}
