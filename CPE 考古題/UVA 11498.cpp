// CPE 一星題
// CPE 考古題: 2020/6
// f436. 11498 - Division of Nlogonia

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int K;
	while (cin >> K) {
		if (K == 0)break;
		int x, y; cin >> x >> y;
		for (int i = 0; i < K; i++) {
			int kx, ky; cin >> kx >> ky;
			if (x == kx || y == ky) {
				cout << "divisa\n";
				continue;
			}

			if (kx > x && ky > y) {
				cout << "NE\n";
			}
			else if (kx > x && ky < y) {
				cout << "SE\n";
			}
			else if (kx < x && ky > y) {
				cout << "NO\n";
			}
			else cout << "SO\n";
		}
	}
}
