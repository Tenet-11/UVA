#include <iostream>
using namespace std;

int main() {
	const int MAXN = 30000;
	long long int dp[MAXN + 1] = { 0 };
	int coins[5] = { 1,5,10,25,50 };
	dp[0] = 1;

	// 一開始就把1 ~ 30000的換錢組合數做好
	for (int c : coins) {
		for (int x = c; x <= MAXN; x++) {
			dp[x] += dp[x - c];
		}
	}

	int N;
	while (cin >> N) {
		if (dp[N] == 1) {
			cout << "There is only 1 way to produce " << N << " cents change.\n";
		}
		else {
			cout << "There are " << dp[N] << " ways to produce " << N << " cents change.\n";
		}
	}
}
