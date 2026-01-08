#include <iostream>
using namespace std;

int main() {
	int N;
	long long int dp[81] = { 0 };
	dp[1] = 1;

	long long int m = 0, f = 1;
	for (int i = 2; i <= 80; i++) {
		long long int last_m = f;
		long long int last_f = m + f;

		dp[i] = last_m + last_f;
		m = last_m;
		f = last_f;
	}

	while (cin >> N) {
		if (N == 0)break;
		cout << dp[N] << '\n';
	}
}
