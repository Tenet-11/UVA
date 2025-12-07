// d318. 11185 - Ternary

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		if (N < 0)break;
		if (N == 0) {
			cout << 0 << '\n';
			continue;
		}

		vector<int>bits;
		while (N != 0) {
			int x;
			x = N % 3;
			N /= 3;
			bits.push_back(x);
		}
		for (int i = bits.size() - 1; i >= 0; i--) {
			cout << bits[i];
		}
		cout << '\n';
	}
}
