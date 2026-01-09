#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int N;
	while (cin >> N) {
		if (N == 0)break;
		int nums[51] = { 0 };
		for (int i = 1; i <= N; i++) {
			cin >> nums[i];
		}

		int total_pairs = 0;
		int coprime = 0;
		for (int i = 1; i <= N; i++) {
			for (int j = i + 1; j <= N; j++) {
				total_pairs++;
				if (gcd(nums[i], nums[j]) == 1) {
					coprime++;
				}
			}
		}
		if (coprime == 0) {
			cout << "No estimate for this data set.\n";
			continue;
		}
		double ans = sqrt(6 * total_pairs / coprime);
		cout << fixed << setprecision(6) << ans << '\n';
	}
}
