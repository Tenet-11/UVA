#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int ans = 0;
		for (int i = 2; i < sqrt(n) + 1; i++) {
			if (n % i == 0) {
				while (n % i == 0 && n > 1) {
					ans += i;
					n /= i;
				}
			}
		}
		if (n != 1) {
			ans += n;
		}
		cout << ans << endl;
	}
}
