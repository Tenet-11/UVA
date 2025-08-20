#include <iostream>
using namespace std;

int sum(int n) {
	// tips: 短路運算 + 遞迴
	n && (n += sum(n - 1));
	return n;
}

int main() {
	int n;
	cin >> n;
	cout << sum(n);
}
